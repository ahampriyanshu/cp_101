'use strict';

const { readFile, writeFile } = require('fs');
const { promisify } = require('util');

const read = promisify(readFile);
const write = promisify(writeFile);

const input = {
  a: './a_example.txt',
  b: './b_read_on.txt',
  c: './c_incunabula.txt',
  d: './d_tough_choices.txt',
  e: './e_so_many_books.txt',
  f: './f_libraries_of_the_world.txt',
};

(async () => {

  try {

    const file = input.f;
    const res = await read(file, 'utf8');

    let data = res.split('\n');
    data = data.splice(0, data.length-1);
    data = data.map(x => x.split(' '));
    data = data.map(x => x.map(y => +y));

    const B = data[0][0];
    const L = data[0][1];
    const D = data[0][2];

    const SCORES = data[1];
    const libraries = [];

    for (let i = 2; i < data.length-1; i+=2) {
      const library = {
        count: data[i][0],
        process: data[i][1],
        bpd: data[i][2], // books per day
        registered: false,
        id: null,
        id1: (i-2)/2,
        indexes: data[i+1],
        answer: [],
      };

      // console.log(library.indexes);

      libraries.push(library);
      // a_example --> scores 1 2 3 6 5 4
      // [ { count: 5, process: 2, bpd: 2, indexes: [ 0, 1, 2, 3, 4 ] },  | 1+2+3+6+5=17
      // { count: 4, process: 3, bpd: 1, indexes: [ 0, 2, 3, 5 ] } ]      | 1+3+6+4=14
    }

    // LOGIC
    let ID = 0;
    let max_process = 0;
    let lcount = 0;
    for (let l = 0; l < L; l++) {
      const library = libraries[l];
      if (max_process < library.process && !library.registered) {
        max_process = library.process;
        library.registered = true;
        library.id = ID;
        ID++;
      }
    }

    let books = 0;
    for (let t = 0; t < D; t++) {
      if (t === 0)
        t += max_process-1;

      for (let l = 0; l < L; l++) {
        let library = libraries[l];
        if (library.registered && library.count) {
          if (library.count - library.bpd >= 0) {
            books += library.bpd;
            library.count -= library.bpd;
          }
          else {
            books += library.count;
            library.count = 0;
          }
        } else {
          library.process--;
          if (library.process < 1) {
            library.registered = true;
            library.id = ID;
          }
        }
      }
    }

    let bcount = 0;
    for (let i = 0; i < books-1; i++) {
      for (let l = 0; l < libraries.length; l++) {
        let library = libraries[l];
        if (bcount < books-1) {
          if (library.indexes !== undefined && library.indexes[i] !== undefined) {
            library.answer.push(library.indexes[i]);
            bcount++;

          }
        }
      }
    }

    let answer = '';
    answer += libraries.length + '\n';

    libraries.sort((a, b) => a.id > b.id);

    for (let library of libraries) {
      answer += library.id1 + ' ' + library.answer.length + '\n';
      for (let a of library.answer)
        answer += a + ' ';
      answer += '\n';
    }

    // console.log(answer);

    await write(file + '.out', answer);

  } catch (err) {
    console.error(err);
  }

})();

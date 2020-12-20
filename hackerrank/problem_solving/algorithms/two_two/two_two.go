package main

import (
	"bufio"
	"fmt"
	"io"
	"math/big"
	"os"
	"strconv"
	"strings"
)

/*NumberTree : To store children data*/
type NumberTree struct {
	flags    int32
	children []*NumberTree
}

var flg bool = false

func (nt *NumberTree) add(numberString string, i int32, level int32) {
	var index = numberString[i] - '0'

	if flg {
		fmt.Fprintln(os.Stderr, " numberString:", numberString, "i:", i, "index:", index, "level:", level)
	}
	if int32(len(numberString)) == i+1 {
		(*nt).flags |= 1 << index
		if flg {
			fmt.Fprintf(os.Stderr, " add flags: 0x%08x\n", nt.flags)
		}
		return
	}
	if nt.children[index] == nil {
		var child NumberTree = NumberTree{flags: 0, children: make([]*NumberTree, 10, 10)}
		if flg {
			fmt.Fprintln(os.Stderr, " index:", index, " is null")
		}
		(*nt).children[index] = &child
	}
	(*nt).children[index].add(numberString, i+1, level+1)
}

func (nt *NumberTree) count(numberString string, i int32, level int32) int32 {
	var result int32
	var index = numberString[i] - '0'

	if flg {
		fmt.Fprintln(os.Stderr, " count index:", index, "level:", level, "numberString:", numberString)
		fmt.Fprintf(os.Stderr, " flags: 0x%04x\n", nt.flags)
	}
	if (*nt).flags&(1<<index) > 0 {
		result = 1
	} else {
		result = 0
	}
	if flg {
		fmt.Fprintln(os.Stderr, " count numberString:", numberString, "i:", i, "index:", index)
	}

	if (*nt).children[index] == nil || int32(len(numberString)) == i+1 {
		if flg {
			fmt.Fprintln(os.Stderr, " count result a:", result)
		}
		return result
	}

	result += (*nt).children[index].count(numberString, i+1, level+1)
	if flg {
		fmt.Fprintln(os.Stderr, " count resultb :", result)
	}
	return result
}

func twoTwo(a string) int32 {

	if flg {
		fmt.Fprintln(os.Stderr, "a:", a)
	}
	var result int32
	var bigInt *big.Int = big.NewInt(1)
	var bigInt2 *big.Int = big.NewInt(2)
	var maxPowerOfTwo int32 = 801
	var i int32
	var root NumberTree
	var rootPtr *NumberTree
	var level int32

	root.children = make([]*NumberTree, 10, 10)
	rootPtr = &root
	if a[0] == '0' {
		a = string([]byte(a)[1:])
	}
	level = 0
	for i = 0; i < maxPowerOfTwo; i++ {
		if flg {
			fmt.Fprintf(os.Stderr, " bigInt: %s %s\n", bigInt.String(), bigInt)
		}
		rootPtr.add(bigInt.String(), 0, level)
		if flg {
			fmt.Fprintf(os.Stderr, "root flags a: 0x%08x\n", (*rootPtr).flags)
		}
		bigInt.Mul(bigInt, bigInt2)
	}
	fmt.Fprintf(os.Stderr, "root flags: 0x%08x\n", root.flags)
	level = 0
	for i = 0; i < int32(len(a)); i++ {
		result += rootPtr.count(a, i, level)
	}
	fmt.Fprintln(os.Stderr, "result:", result)
	return result
}

func main() {
	reader := bufio.NewReaderSize(os.Stdin, 1024*1024)

	stdout, err := os.Create(os.Getenv("OUTPUT_PATH"))
	checkError(err)

	defer stdout.Close()

	writer := bufio.NewWriterSize(stdout, 1024*1024)

	tTemp, err := strconv.ParseInt(readLine(reader), 10, 64)
	checkError(err)
	t := int32(tTemp)

	for tItr := 0; tItr < int(t); tItr++ {
		a := readLine(reader)

		result := twoTwo(a)

		fmt.Fprintf(writer, "%d\n", result)
	}

	writer.Flush()
}

func readLine(reader *bufio.Reader) string {
	str, _, err := reader.ReadLine()
	if err == io.EOF {
		return ""
	}

	return strings.TrimRight(string(str), "\r\n")
}

func checkError(err error) {
	if err != nil {
		panic(err)
	}
}
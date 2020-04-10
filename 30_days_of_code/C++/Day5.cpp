#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    string line;
    string first = "";
    string second = "";

    for (int i=0;i<n;i++)
    {
      getline(cin, line);
      first = "";
      second = "";
      for (int c = 0; c < line.length(); c++) {
        if (c % 2 == 0) {
          first += line[c];
        } else {
          second += line[c];
        }
      }
      cout << first << " " << second << endl;
    }

    return 0;
}

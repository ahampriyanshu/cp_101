/*
# Task

Consider a staircase of size : n=4

   #
  ##
 ###
####

# Problem Statement:
https://www.hackerrank.com/rest/contests/master/challenges/staircase/download_pdf?language=English
*/


#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {

for (int i=1; i<n+1; i++){

    int k=n-i;
    while( k >0 ){
    cout<<" ";
    k--;}

    for (int j=0; j<i ; j++){

        cout << "#";
    }
    cout << endl;
}

}

int main()
{
    int n;
    cin >> n;

    staircase(n);

    return 0;
}

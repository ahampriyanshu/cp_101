/*
# Task
 
Given an array of integers, calculate the fractions of its elements that are
positive, negative, and are zeros. Print the decimal value of each fraction on a
new line.

# Problem Statement:
https://www.hackerrank.com/rest/contests/master/challenges/plus-minus/download_pdf?language=English
*/

#include <vector>
#include <iostream>

using namespace std;

int main(){

    int len;
    double p = 0, n =0, z =0;
    
    cin >> len;
    vector<int> arr(len);

    for(int i = 0; i < len; i++){
       cin >> arr[i];
    }

    for(int i=0; i < len; i++){
       if (arr[i] < 0) {
           n++;
       } else if (arr[i] > 0) {
           p++;
       } else {
           z++;
       }
    }

    cout << (p / len) << endl << (n / len) << endl << (z / len) ;

    return 0;
}

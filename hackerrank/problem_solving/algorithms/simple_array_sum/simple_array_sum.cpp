/*
# Task
Given an array of integers, find the sum of its elements.

Complete the simpleArraySum function in the editor below. It must return the 
sum of the array elements as an integer

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n];
    int sum=0;

    for (int i=0;i<n;i++){
        cin >>ar[i];
        sum +=ar[i];
    }
    cout << sum;
}

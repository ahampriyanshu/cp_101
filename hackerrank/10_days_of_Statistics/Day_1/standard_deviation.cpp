/*
Problem: 
https://www.hackerrank.com/rest/contests/master/challenges/s10-standard-deviation/download_pdf?language=English
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int i,size,arr[101];
    float sum=0,mean=0,mean_sq=0,sd=0;

    cin >> size;

        for ( i=0  ; i<size ; i++ )
    {
        cin >> arr[i];
    }

    for ( i=0  ; i<size ; i++ )
    {
        sum += arr[i];
    }

    mean = sum/size;

    for ( i=0  ; i<size ; i++ )
    {
        mean_sq += pow((arr[i]-mean),2);
    }

    sd = sqrt(mean_sq/size);

    cout << sd;

    return 0;
}

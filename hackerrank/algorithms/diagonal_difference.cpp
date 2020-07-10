/*
 
Given a square matrix, calculate the absolute difference between the sums of its
diagonals.

For example, the square matrix arr is shown below:

1 2 3
4 5 6
9 8 9

Answer should be 15

 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a=0, b=0;
    
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));


    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

        cin >> arr[i][j];

        if(i==j)
        {
            a += arr[i][j];
        }

        if ( j == n -i -1 ){
            
            b += arr[i][j];
        }

        }
    }

    cout << abs(b-a);

    return 0;
}

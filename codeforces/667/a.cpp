/*
Author : ahampriyanshu
Problem: A
Contest: 1409
Platform: Codeforces
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll A,B,K,test;

void solve(){

    cin >> A >> B;
    K = abs(A-B);

    if ( K%10 == 0){
        cout << K/10 << endl;
    }
    else
    {
        cout << K/10 + 1 << endl;
    }
    

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (cin >> test; test--;)
    {
     solve();
    }
}
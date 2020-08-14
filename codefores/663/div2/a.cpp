#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
typedef unsigned us;
typedef long long ll;
typedef long double ld;
 
void runCase() {
    short int n;
    scanf("%hi" , &n);
 
    for(short int i=1; i<=n; i++) {
        printf("%hi " , i);
    }
    printf("\n");
}
 
int main(int argc , char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    short int T;
    scanf("%hi" , &T);
 
    while(T--) {
        runCase();
    }
    return 0;
}

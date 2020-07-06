#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n;
		int a[n];
		int max=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int b[1001]={0};
		for(int i=0;i<n;i++){
			b[a[i]]++;
			if(a[i]==a[i+1])
			i++;
		}
		for(int i=1;i<=1000;i++){
			if(b[i]>max){
			max=b[i];
			x=i;
			}
		}
		cout<<x<<endl;
	}
	return 0;
}

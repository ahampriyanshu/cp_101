#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll factor(ll n)
{
  if(n %2==0)return 2;
	for(ll i=3;i<=n ;i+=2){
	if(n %i==0)  return i;}
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
	ll cases,number,times;
	cin>>cases;
	for(int i=0;i<cases;i++){
		cin>>number>>times;
		cout<<number+factor(number)+(times-1)*2
        <<endl;
	}
	return 0;
}

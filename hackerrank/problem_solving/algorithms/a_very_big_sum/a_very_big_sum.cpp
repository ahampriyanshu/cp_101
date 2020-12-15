/*
 Calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.

Function Description

Complete the aVeryBigSum function in the editor below. It must return the sum of all array elements.

aVeryBigSum has the following parameter(s):

ar: an array of integers .
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
long long n=0,s=0,x=0;
cin>>n;
for(unsigned long long i=0;i<n;i++)
	{
	cin>>x;
	s+=x;
	}
cout<<s<<"\n";
return 0;
}

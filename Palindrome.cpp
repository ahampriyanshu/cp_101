#include <iostream>  
using namespace std;  
int main()  
{  
int num,remain,sum=0,temp;    
cout<<"Enter the Number=  ";    
cin>>num;    
temp=num;    
while(num>0)    
{    
remain=num%10;    
sum=sum+(remain*remain*remain);    
num=num/10;    
}    
if(temp==sum)    
cout<<"Armstrong Number"<<endl;    
else    
cout<<"Not A Armstrong Number"<<endl;   
return 0;  
}  

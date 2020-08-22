#include<iostream>
#include<stdio.h>
int next_generation(int a[100][100],int m,int n,int gen)		//Function to print next generation
{
	int b[m+2][n+2],c[100][100];			
	for(int i=0;i<m+2;i++)
	{
		for(int j=0;j<n+2;j++)
		{
			b[i][j]=0;			//initiallising all element of b to zero
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==1)                                 //If any element has value '1' in array a[][] then all neighbour of same index get increased by 1 in array b[][]
			{
				for(int k=i-1;k<i+2;k++)
				{
					for(int l=j-1;l<j+2;l++)
					{
						b[k][l]++;
					}
				}
				b[i][j]--;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==1)
			{
				if(b[i][j]==2||b[i][j]==3)		//As per game of life rule assigning array c[][]
				{
					c[i][j]=1;
				}
				else
				{
					c[i][j]=0;
				}
			}
			else if(a[i][j]==0&&b[i][j]==3)
                        {
                                c[i][j]++;
                        }
			else
			{
				c[i][j]=0;
			}
		}
	}
	for(int i=1;i<n;i++)
                cout<<"---";
	cout<<endl;
	cout<<"Generation "<<gen<<endl;
	cout<<endl;
	for(int i=1;i<m+1;i++)
	{
		for(int j=1;j<n+1;j++)
		{
			cout<<c[i][j]<<" ";				//Printing next generation
		}
		cout<<endl;
	}
	for(int i=1;i<n;i++)
                cout<<"---";
	cout<<endl;
	gen++;
	cout<<"Do you want to see next generation?"<<endl;
	cout<<"Enter Y for yes, N for no"<<endl;			//loop for giving option to print further next generation if interested
	while(true)
	{
		char var;
		cin>>var;
		if(var=='Y')
		{
			next_generation(c,m,n,gen);			//function call for next generation
		}
		else if(var=='N')
		{
			break;

		}
		else
		{
			cout<<"Invalid entry"<<endl;
		}
	}
	cout<<"GOOD BYE"<<endl;
	return 0;
}
int main()
{
	int m,n;
	cout<<"Enter the size of game of life grid"<<endl;
	cout<<"Enter number of rows"<<endl;				//deciding grid size
	cin>>m;
	cout<<"Enter number of columns"<<endl;
	cin>>n;
	int a[100][100];
	cout<<"Now enter elements for Generation 1"<<endl;
	cout<<"0 for dead cell"<<endl;
	cout<<"1 for live cell"<<endl;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int x;
			cin>>x;
			if(x==0)
			{
				a[i][j]=x;				//Validating so that only 1 or 0 is assigned in array
			}
			else if(x==1)
			{
				a[i][j]=x;
			}
			else
			{
				cout<<"Only 0 or 1 is allowed"<<endl;
				j--;
			}
		}
	}
	cout<<endl;
	cout<<"Generation 1:"<<endl;
	for(int i=1;i<n;i++)
		cout<<"---";
	cout<<endl;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<a[i][j]<<" ";				//Printing first generation(Input)
		}
		cout<<endl;
	}
	int ret;
	ret=next_generation(a,m,n,2);					//calling function for next generation 
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,x,n,i,j;
	cin>>t;
	while(t--)
	{
		cin>>x;
		n=(-1.0+sqrt(1+8*x))/2.0;
		if(n%2!=0)
		{
		i=x-(n*(n+1))/2;
		if(i==0)
		{
			i=1;
			j=n-i+1;
		}
		else
			j=n-i+2;
		}
		else
		{
			j=x-(n*(n+1))/2;
			if(j==0)
			{
				j=1;
				i=n-j+1;
			}
			else
				i=n-j+2;
		}
		cout<<"TERM "<<x<<" IS "<<i<<"/"<<j<<"\n";
	}
	return 0;
}
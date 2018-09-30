#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,x,y;
	cin>>n;
	while(n--)
	{
		cin>>x>>y;
		if(x==y||y==(x-2))
		{
			if(x==y)
			{
				if(x%2==0)
					cout<<x*2<<"\n";
				else
					cout<<x*2-1<<"\n";
			}
			else
			{
				if(x%2==0)
					cout<<x+y<<"\n";
				else
					cout<<x+y-1<<"\n";
			}
		}
		else
			cout<<"No Number\n";
	}
	return 0;
}
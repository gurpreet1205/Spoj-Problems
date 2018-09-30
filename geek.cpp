#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,t,y,z,a;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		z=0;
		a=1;
		while(x!=0||y!=0)
		{
			if(x%2==y%2)
				z=z+a;
			a=a*2;
			x=x/2;
			y=y/2;
		}
		cout<<z<<"\n";
	}
	return 0;
}
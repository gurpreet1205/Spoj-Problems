#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,m,i,j,x,y;
	cin>>t;
	while(t--)
	{
		//cin>>c;
		cin>>n>>m;
		long long int a[n],b[m];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<m;i++)
			cin>>b[i];
		x=a[0];
		for(i=1;i<n;i++)
		{
			if(a[i]>x)
				x=a[i];
		}
		y=b[0];
		for(i=1;i<m;i++)
		{
			if(b[i]>y)
				y=b[i];
		}
		if(x>=y)
			cout<<"Godzilla\n";
		else
			cout<<"MechaGodzilla\n";
	}
	return 0;
}
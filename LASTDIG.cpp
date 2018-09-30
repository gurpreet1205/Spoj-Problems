#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,a,b,i,x,j,k,y,z,p,q,r,s;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		long long int arr[10]={0},c[10],d[10];
		x=1;
		j=0;
		for(i=0;i<10&&i<b;i++)
		{
			x=x*a;
			x=x%10;
			c[j++]=x;
			if(arr[x]==1)
			{
				y=x;
				d[0]=y;
				z=1;
				for(k=j-2;k>=0;k--)
				{
					if(c[k]==y)
						break;
					d[z++]=c[k];
				}
				break;
			}
			arr[x]=1;
		}
		p=b-j;
		q=p%z;
		if(q==0)
			cout<<x<<"\n";
		else
			cout<<d[z-q]<<"\n";
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,x,y,sum,z,a,b,d,i,n;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>sum;
		z=x+y;
		if(sum%z==0)
			n=(sum/z)*2;
		else
			n=((sum-(z/2))/z)*2+1;
		a=y-x;
		b=n-6;
		d=a/(b+1);
		cout<<n<<"\n";
		cout<<x-2*d<<" "<<x-d<<" ";
		for(i=0;i<n-2;i++)
			cout<<x+i*d<<" ";
		cout<<"\n";
	}
	return 0;
}

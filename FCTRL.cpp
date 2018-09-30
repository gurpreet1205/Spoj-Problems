#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,i,j,a=5,z,b;
	cin>>t;
	while(t--)
	{
		z=0;
		cin>>n;
		for(i=1;;i++)
		{
			b=pow(a,i);
			if(b>n)
				break;
			z=z+n/b;
		}
		cout<<z<<"\n";
	}
	return 0;
}
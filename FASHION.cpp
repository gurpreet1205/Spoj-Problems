#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,i,sum;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>n;
		long long int a[n],b[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		for(i=0;i<n;i++)
			sum=sum+a[i]*b[i];
		cout<<sum<<"\n";
	}
	return 0;
}
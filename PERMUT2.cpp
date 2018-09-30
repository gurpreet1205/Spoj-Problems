#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j;
	cin>>n;
	while(n!=0)
	{
		long long int a[n],b[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=i;
		}
		for(i=0;i<n;i++)
		{
			if(a[a[i]-1]!=i+1)
				break;
		}
		if(i==n)
			cout<<"ambiguous\n";
		else
			cout<<"not ambiguous\n";
		cin>>n;
	}
	return 0;
}
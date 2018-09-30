#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j,sq;
	while(1)
	{
		sq=0;
		cin>>n;
		if(n==0)
			break;
		for(i=0;i<n;i++)
			sq=sq+(n-i)*(n-i);
		cout<<sq<<"\n";
	}
	return 0;
}
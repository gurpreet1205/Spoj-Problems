#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	while(n>1)
	{
		if(n%2!=0)
			break;
		n=n/2;
	}
	if(n==1)
		cout<<"TAK";
	else
		cout<<"NIE";
	return 0;
}

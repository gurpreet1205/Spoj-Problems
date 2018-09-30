#include<bits/stdc++.h>
using namespace std;
long long int a[10000]={0};
int main()
{
	long long int n,i=0,b,c,flag;
	cin>>n;
	a[n]=1;
	flag=0;
	while(1)
	{
		b=0;
		while(n>0)
		{
			c=n%10;
			n=n/10;
			b=b+c*c;
		}
		if(b==1)
		{
			i++;
			flag=1;
			break;
		}
		if(a[b]==0)
		{
			n=b;
			i++;
			a[b]=1;
			continue;
		}
		break;
	}
	if(flag==1)
		cout<<i;
	else
		cout<<-1;
	return 0;
}

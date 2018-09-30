#include<bits/stdc++.h>
using namespace std;
long  long int x[5001];
long long int dp(char *a,long long int n)
{
	if(n==0)
		return 1;
	if(n==1&&a[0]!='0')
		return 1;
	if(a[0]=='0')
		return 0;
	if(x[n-1]!=0)
		return x[n-1];
	if(((a[0]-'0')*10+(a[1]-'0'))>26)
		x[n-1]=dp(a+1,n-1);
	else
		x[n-1]=dp(a+1,n-1)+dp(a+2,n-2);
	return x[n-1];
}
int main()
{
	char a[5001];
	long long int i;
	while(1)
	{
		i=0;
		cin>>a;
		fflush(stdin);
		if(a[0]=='0')
			break;
		while(a[i]!='\0')
		{
			x[i]=0;
			i++;
		}
		cout<<dp(a,i)<<"\n";
	}
	return 0;
}
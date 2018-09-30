#include<bits/stdc++.h>
using namespace std;
int main()
{
	double c,sum;
	long long int n;
	c=5.00;
	cin>>c;
	while(c!=0.00)
	{
		sum=1.0/2;
		n=1;
		while(sum<c)
		{
			sum=sum+(1.0/(n+2));
			n++;
		}
		cout<<n<<" card(s)"<<"\n";
		cin>>c;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
char a[10000001];
int main()
{
	long long int t,k,i,j,flag,p,q;
	cin>>t;
	while(t--)
	{
		flag=0;
		cin>>a;
		k=0;
		while(a[k]!='\0')
			k++;
		i=k/2-1;
		j=i+1+k%2;
		while(i!=-1&&a[i]==a[j])
		{
			i--;
			j++;
		}
			if(i!=-1&&a[j]<a[i])
				a[j]=a[i];
			else if(k%2==1&&a[k/2]!='9')
			{
				a[k/2]=a[k/2]+1;
				flag=1;
				j--;
				i++;
			}
			else
			{	
				for(p=k/2-1,q=p+1+k%2;q<j;p--,q++)
				{
					if(a[p]=='9')
					{
						a[p]='0';
						a[q]='0';
					}
					else
					{
						a[p]=a[p]+1;
						a[q]=a[q]+1;
						flag=1;
						i++;
						j--;
						break;
					}
				}
				if(flag==0&&i!=-1)
				{
					a[i]=a[i]+1;
					a[j]=a[i];
				}
				if(k%2==1)
					a[k/2]='0';
			}
			for(q=1;q<=i;q++)
				a[j+q]=a[i-q];
			if(flag==0&&i==-1)
			{
				cout<<1;
				a[k-1]='1';
			}
		cout<<a<<"\n";
	}
	return 0;
}

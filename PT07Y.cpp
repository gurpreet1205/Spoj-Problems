#include<bits/stdc++.h>
using namespace std;
long long int n,m;
int dfs(vector <long long int> *v)
{
	long long int a[n],i,j,visited[n]={0};
	long long int top,x,y,z=0;
	for(i=0;i<n;i++)
	{
		if(visited[i]!=0)
			continue;
		a[0]=i;
		visited[i]=1;
		top=0;
		while(top>=0)
		{
			x=a[top];
			y=v[x].size();
			top--;
			for(j=0;j<y;j++)
			{
				if(visited[v[x][j]]==0)
				{
					a[++top]=v[x][j];
					visited[v[x][j]]=1;
				}
			}
		}
		z++;
	}
	//cout<<z<<"\n";
	if(m==n-z)
		return 1;
	return 0;
}
int main()
{
	long long int i,j,k,u,vv;
	cin>>n>>m;
	vector <long long int> v[n];
	for(i=0;i<m;i++)
	{
		cin>>u>>vv;
		v[u-1].push_back(vv-1);
		v[vv-1].push_back(u-1);
	}
	if(dfs(v))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
struct node
{
	struct node* left,right;
	long long int sum,l,r;
};
long long int find_sum(struct node *P,long long int p,long long int q)
{
	if()
}
void traverse(struct node *P,long long int p,long long int q,long long int v)
{
	if(P->l>=p&&P->r<=q)
	{
		P->sum=P->sum+v*(P->r-P->l+1);
		return;
	}
	if(P==NULL||P->l>q||P->r<p)
		return;
	if(P->l>=p)
		P->sum=P->sum+(q-P->l+1)*v;
	if(P->r<=q)
		P->sum=P->sum+(P->r-p+1)*v;
	if(P->l<p&&P->r>q)
		P->sum=P->sum+(q-p+1)*v;
	traverse(P->left,p,q,v);
	traverse(P->right,p,q,v);
}
void initialize(struct node *p,long long int lt,long long int rt)
{
	p->l=lt;
	p->r=rt;
	p->sum=0;
	if(lt==rt)
	{
		P->left=NULL;
		P->right=NULL;
		return;
	}
	initialize(p->left,lt,(rt+lt)/2);
	initialize(p->right,(rt+lt)/2+1);
}
struct node * seg_tree(long long int n)
{
	struct node* start,p
	start=(struct node *)(malloc(sizeof(struct node)));
	p=start;
	initialize(start,1,n);
	return start;
}
int main()
{
	long long int t,n,c,i,j,type,p,q,v;
	cin>>t;
	while(t--)
	{
		cin>>n>>c;
		struct node * start;
		start=segtree(n);
		for(i=0;i<c;i++)
		{
			cin>>type;
			if(type==0)
			{
				cin>>p>>q>>v;
				traverse(start,p,q,v);
			}
			else
			{
				cin>>p>>q;
				find_sum()
			}
		}
	}
	return 0;
}
#include<iostream>
using namespace std;
void swap(long long int *a,long long int *b)
{
	long long int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(long long int a[],long long int l,long long int h)
{
	long long int x=a[h],i=l-1,j;
	for(j=l;j<h;j++)
	{
		if(a[j]>=x)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[h]);
	return i+1;
}
void sort(long long int a[],long long int l,long long int h)
{
	if(l<h)
	{
		int p=partition(a,l,h);
		sort(a,l,p-1);
		sort(a,p+1,h);
	}
}
int main()
{
	long long int a[20000],b[20000],i,n,m,j,k;
	cin>>n>>m;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<m;i++)
	cin>>b[i];
	sort(a,0,n-1);
	int s;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
	{
		if(a[j]<=b[i])
		{
			k=j;
			break;
		}
	}
	cout<<n-k<<" ";
	}
	return 0;
}

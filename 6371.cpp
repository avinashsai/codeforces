#include<iostream>
using namespace std;
void swap(long long int *a,long long int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(long long int a[],long long int l,long long int h)
{
	int x=a[h],i=l-1,j;
	for(j=l;j<h;j++)
	{
		if(a[j]<=x)
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
		sort(a,p+1,h);	}
}
int main()
{
	long long int a[1000],i,n,max=-1,s,pre,x;
	cin>>n;
	for(i=1;i<n;i++)
	cin>>a[i];
	sort(a,0,n-1);
	pre=a[0];s=1;
	for(i=1;i<n;i++)
	{
		if(pre==a[i])
		s++;
		else
		{
			if(pre!=a[i])
			{
				if(max<s)
				{
					x=pre;
					s=max;
				}
				s=1;
			}
		}
		pre=a[i];
	}
	cout<<x;
	return 0;
}

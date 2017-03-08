#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int a[],int l,int h)
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
void sort(int a[],int l,int h)
{
	if(l<h)
	{
		int p=partition(a,l,h);
		sort(a,l,p-1);
		sort(a,p+1,h);	}
}
int main()
{
	int a[1000];
	int i,n,pre,flag=0,s;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,0,n-1);
	pre=a[0];s=0;
	for(i=1;i<n;i++)
	{
		if(a[i]-pre==1)
		s++;
		else if(a[i]==pre)
		continue;
		else
		{
			s=0;
		}
		if(s==2)
		{
			flag=1;
			break;
		}
		pre=a[i];
	}
	if(flag==0)
	cout<<"NO\n";
	else
	cout<<"YES\n";
	return 0;
}

#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
	long long int a[200000],i,n,flag1=0,flag2=0,j,max=INT_MIN,min=INT_MAX;
	char b[200000];
	cin>>n;
	cin>>b;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]=='R')
		{
		flag1=1;
		if(b[i]>max)
	}
	}
	if(flag1)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[j]=='L')
			{
				flag2=1;
				break;
			}
		}
	}
	if(flag1&&flag2)
	{
		long long int mid=(a[i]+a[j])/2;
		cout<<mid-a[i];
	}
	else
	cout<<"-1";
	return 0;
}

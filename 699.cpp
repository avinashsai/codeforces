#include<iostream>
using namespace std;
int seq(long long int a[],long long int n)
{
	long long int b[n];
	for(int i=0;i<n;i++)
	b[i]=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j]&&b[j]+1>b[i])
			b[i]=b[j]+1;
		}
	}
	long long int max=0;
	for(int i=0;i<n;i++)
	{
		if(max<b[i])
		max=b[i];
	}
	return max;
}
int main()
{
	long long int a[100000],i,n;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<seq(a,n);
	return 0;
}

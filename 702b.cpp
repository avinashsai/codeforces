#include<iostream>
using namespace std;
int main()
{
	long long int a[100000],i,n,j,c=0,sum;
	cin>>n;
	cin>>a[0];
	for(i=1;i<n;i++)
	{
		cin>>a[i];
		for(j=i-1;j>=0;j--)
		{
			sum=a[i]+a[j];
			if((sum & (sum-1))==0)
			c++;
		}
	}
	cout<<c;
	return 0;
}

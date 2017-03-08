#include<iostream>
using namespace std;
int main()
{
	long long int n,m,a[5]={0},b[5]={0},sum=0,i;
	cin>>m>>n;
	for(i=1;i<=m;i++)
	{
		++a[i%5];
	}
	for(i=1;i<=n;i++)
	{
		++b[i%5];
	}
	sum=a[0]*b[0];
	for(i=1;i<5;i++)
	{
		sum=sum+a[i]*b[5-i];
	}
	cout<<sum;
	return 0;
}

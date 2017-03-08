#include<iostream>
using namespace std;
int main()
{
	int a[100],i,n,c=0,k,l;
	cin>>n>>k;
	for(i=1;i<=n;i++)
	cin>>a[i];
	if(a[k]==1)
	c++;
	for(l=1;k-l>=0||k+l<=n;l++)
	{
		 if(a[k-l]==1&&a[k+l]==1&&k+l<=n)
		c=c+2;
		else if(a[k-l]==1&&k+l>n)
		c++;
		else if(a[k+l]==1&&k-l<0)
		c++;
	}
	cout<<c;
	return 0;
}

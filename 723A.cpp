#include<iostream>
using namespace std;
int main()
{
	int k,r,i=1;
	cin>>k>>r;
	for(i=1;i<=10;i++)
	{
		if((k*i)%10==r)
		{
			cout<<i;
			return 0;
		}
	}
	for(i=1;i<=10;i++)
	{
		if((k*i)%10==0)
		{
			cout<<i;
			return 0;
		}
	}
}

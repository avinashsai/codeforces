#include<iostream>
using namespace std;
int main()
{
	long long int n,h,sum=0,l;
	cin>>n>>h;
	while(n--)
	{
		cin>>l;
		if(l<=h)
		sum=sum+1;
		else
		sum=sum+2;
	}
	cout<<sum;
	return 0;
}

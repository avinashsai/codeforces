#include<iostream>
using namespace std;
int main()
{
	long long int n,sum=0,k,h,l,t=0;
	cin>>n>>h>>k;
	while(n--)
	{
		cin>>l;
		if(l>k)
		{
			t=t+l/k;
			t++;
		}
		else if(l==k)
		t++;
		else
		sum=sum+l;
	}
	cout<<t+sum/k;
	return 0;
}

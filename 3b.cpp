#include<iostream>
using namespace std;
int main()
{
	long long int n,v,p,t,a=-1,b=-1;
	cin>>n>>v;
	while(n--)
	{
		cin>>p>>t;
		if(t>=b)
		{
			b=t;
			a=p;
		}
	}
	cout<<b<<"\n"<<a;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int a,b,sum=0,k;
	cin>>a>>b;
	sum=a;
	while(a>=b)
	{
		sum=sum+a/b;
		a=a/b+a%b;
	}
	cout<<sum;
	return 0;
}

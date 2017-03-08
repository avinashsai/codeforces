#include<iostream>
using namespace std;
int main()
{
	long long int a,b,x,y,t;
	cin>>a>>b>>x>>y;
	if(x>a||y>b)
	cout<<"0 0";
	else
	{
		if(a%x==0)
		cout<<a<<" "<<(a/x)*y;
		else 
		{
			t=a%x;
			a=a-t;
			cout<<a<<" "<<(a/x)*y;
		}
	}
	return 0;
}

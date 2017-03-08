#include<iostream>
using namespace std;
int main()
{
	long long int n,a,b,p,q,min,cost,t,k,l;
	cin>>n>>a>>b>>p>>q;
	k=n/a;
	l=n/b;
	if(a*b>n)
	t=0;
	else
	t=(n/(a*b));
	if(p<q)
	{
	cost=((k*p+l*q)-(t*p));}
	else
	cost=((k*p+l*q)-(t*q));
	cout<<cost;
	return 0;
}

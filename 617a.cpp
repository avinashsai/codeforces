#include<iostream>
using namespace std;
int main()
{
	long long int x,s=0,t;
	cin>>x;
	t=x/5;
	s=s+t;
	x=x%5;
	t=x/4;
	s=s+t;
	x=x%4;
	t=x/3;
	s=+t;
	x=x%3;
	t=x/2;
	s=+t;
	x=x%2;
	s=+x;
	cout<<s;
	return 0;
}

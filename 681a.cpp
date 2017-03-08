#include<iostream>
using namespace std;
int main()
{
	string s;
	long long int a,b,flag=0,n;
	cin>>n;
	while(n--)
	{
		cin>>s;
		cin>>a>>b;
		if(a>=2400&&b>a)
		flag=1;
	}
	if(flag)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}

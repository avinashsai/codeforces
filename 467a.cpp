#include<iostream>
using namespace std;
int main()
{
	int p,q,no,n=0;
	cin>>no;
	while(no--)
	{
		cin>>p>>q;
		if(p+2<=q)
		n++;
	}
	cout<<n;
	return 0;
}

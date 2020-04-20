#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	ll n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n&1)
			cout<<n/2;
		else
			cout<<n/2-1;
		cout<<endl;
	}
	return 0;
}
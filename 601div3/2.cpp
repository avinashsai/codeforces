#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int no;
	ll n,k;
	cin>>no;
	while(no--)
	{
		cin>>n>>k;
		ll m = n/k;
		cout<<k*m+min(n-(k*m),k/2)<<endl;
	}
	return 0;
}


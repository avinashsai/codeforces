#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n,i,j;
	ll l;
	cin>>n;
	std::vector<ll> a;
	std::vector<ll> b;
	std::vector<ll> c;
	for(i=0;i<n;i++)
	{
		cin>>l;
		a.push_back(l);
	}
	for(i=0;i<n;i++)
	{
		cin>>l;
		b.push_back(l);
	}
	for(i=0;i<n;i++)
	   c.push_back(a[i] - b[i]);

	sort(c.begin(),c.end());
	ll count = 0;
	for(i=0;i<n;i++)
	{
		if(c[i]>0){	   
		int ind = lower_bound(c.begin(), c.end(), -c[i]+1) - c.begin();
		count+=(i - ind);
		}
	}
	cout<<count;
	return 0;
}
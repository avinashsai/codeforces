#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	vector<ll> a;
	vector<ll> ind;
	int n,i,lastindex,l;
	cin>>n;
	int p[200001] = {0};
	vector<ll> zind1; 
	vector<ll> zind2;
	map<ll,ll> nq;
	for(i=0;i<n;i++)
	{
		cin>>l;
		a.push_back(l);
		p[l] = 1;
	     if(!l)
	     ind.push_back(i+1);
	}
	for(i=1;i<=n;i++)
	{
		if(!p[i])
		zind1.push_back(i)
	}
	for(i=)
	if(zind1.size()>1)
	{
		for(i=0;i<zind1.size();i++)
		a[zind1[i]] = 
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}

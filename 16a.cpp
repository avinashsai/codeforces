#include<iostream>
#include<vector>
#define ll long long int
using namespace std;
int partition(ll a[],ll b[],ll l,ll h)
{
	ll x=(a[h]*b[h]),i=l-1,j;
	for(ll j=l;j<h;j++)
	{
		if((a[i]*))
	}
}
void sort(ll a[],ll b[],ll l,ll h)
{
	if(l<h)
	{
		ll p=partition(a,l,h);
		sort(a,l,p-1);
		sort(a,p+1,h);
	}
}
int main()
{
	ll a[20000],b[20000];
	ll sum=0,m,n,i;
	cin>>n>>m;
	for(i=0;i<n;i++)
	cin>>a[i]>>b[i];
	
	sort(a,b,0,n-1);
}

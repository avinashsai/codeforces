#include<bits/stdc++.h>
using namespace std;
#define ll long long
int find2(ll num)
{
	int cnt = 0;
	while(num)
	{
		num = (num>>1);
		cnt++;
	}
	return cnt;
}
bool find(ll num,vector <ll> a,int l,int h)
{
	int m;
	while(l<=h)
	{
		m=(l+h)/2;
		if(a[m]==num)
		return 1;
		if(a[m]>num)
		h =  m-1;
		else
		l = m+1;
	}
	return 0;
}
int main()
{
	int n,i,j;
	ll count = 0,cur;
	bool res;
	cin>>n;
	vector <ll> a(n);
	for(i=0;i<n;i++)
	cin>>a[i];
	
	if(n==1)
	{
		cout<<"0";
		return 0;
	}
	sort(a.begin(),a.end());
	int max2 = find2(a[n-1]+a[n-2]);
	ll power[max2];
	power[0] = 1;
	for(i=1;i<=max2;i++)
	power[i] = power[i-1] * 2;
	
	for(j=0;j<=max2;j++)
	{
		cur = (power[j]-a[0]);
		if(cur)
		{
			res = find(cur,a,1,n-1);
			if(res)
			count++;
		}
		for(i=1;i<n;i++)
		{
			if(a[i]==a[i-1])
			{
				if(res)
				count+=1;
				continue;
			}
		cur = (power[j]-a[i]);
		if(cur)
		{
			res = find(cur,a,i+1,n-1);
			if(res)
			count++;
		}
		}
	}
	cout<<count;
	return 0;
}

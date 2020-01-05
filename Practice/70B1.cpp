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
int main()
{
	int n,i,j;
	ll count = 0,cur;
	bool res;
	cin>>n;
	vector <ll> a(n);
	map<ll,int> cnt;
	for(i=0;i<n;i++){
	cin>>a[i];
	if(cnt.find(a[i])!=cnt.end())
	cnt.find(a[i])->second+=1;
	else
	cnt.insert(pair<ll,int>(a[i],1));
}
map<ll,int>::iterator it;
//for(it=cnt.begin();it!=cnt.end();it++)
//cout<<it->first<<" "<<it->second<<"\n";
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
	for(i=0;i<n;i++)
	{
		for(j=0;j<=max2;j++)
		{
			ll res = (power[j]-a[i]);
			if(res)
			{
				if(cnt.find(res)!=cnt.end())
				{
				if(res!=a[i])
				count+=cnt.find(res)->second;
				else
				count+=cnt.find(res)->second-1;
				//cout<<count<<" ";
			}
			}
		}
	}
	cout<<count/2;
	return 0;
}


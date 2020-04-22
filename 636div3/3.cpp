#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t,i,n,l;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<ll> a;
		for(i=0;i<n;i++)
		{
			cin>>l;
			a.push_back(l);
		}
		ll maxpos = LLONG_MIN, minneg = LLONG_MAX;
		ll cursum = 0;
		if(a[0]<0)
		minneg = a[0];
		else
		maxpos = a[0];
		for(i=1;i<n;i++)
		{
			if(a[i]>0)
			{	
				if(a[i-1]<0){
				maxpos = a[i];
				cursum+=minneg;
				minneg = LLONG_MAX;
			}
			else
			{
				if(maxpos<a[i])
				maxpos = a[i];
			}
			}
			else
			{
				if(a[i-1]>0)
				{
					minneg = a[i];
					cursum+=maxpos;
					maxpos = LLONG_MIN;
				}
				else
				{
					if(minneg<a[i])
					minneg = a[i];
				}
			}
		 }
		 if(minneg!=LLONG_MAX)
		 cursum+=minneg;
		 else
		 cursum+=maxpos;
		 cout<<cursum<<endl; 
	}
	return 0;
}

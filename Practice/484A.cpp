#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long
int find(ll r)
{
	int cnt = 0;
	while(r)
	{
		r = (r>>1);
		cnt+=1;
	}
	return cnt-1;
}
int main()
{
	ll l,r;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>l>>r;
		if(r==1)
		cout<<"1"<<endl;
		else{
		int max2 = find(r);
		cout<<pow(2,max2)-1<<endl;
	}
	}
	return 0;
}

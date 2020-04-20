#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i,j,l;
	cin>>t;
	while(t--)
	{
		cin>>n;
		map<int, int>mp;
		for(i=0;i<n;i++)
		{
			cin>>l;
			auto ind = mp.find(l);
			if(ind!=mp.end())
				mp.find(l)->second+=1;
			else
				mp.insert({l, 1});
		}
		int countuni = mp.size();
		int countsame = 0;
		for(auto ind = mp.begin(); ind!=mp.end();ind++)
		{
			if(ind->second>countsame)
				countsame = ind->second;
		}
		cout<< max(min(countuni,countsame-1),min(countuni-1,countsame))<<endl;
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		n = s.length();
		vector<int> right;
		right.push_back(0);
		for(i=0;i<n;i++)
		{
			if(s[i]=='R')
				right.push_back(i+1);
		}
		right.push_back(n+1);
		//cout<<right.size()<<endl;
		int maxind = INT_MIN;
		for(i=1;i<right.size();i++)
		{
			int dif = right[i]-right[i-1]; 
			//cout<<dif<<" ";
			if(dif>maxind)
				maxind = dif;
		}
		cout<<maxind<<endl;
	}
	return 0;
}
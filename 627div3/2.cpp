#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i,l,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<int> a;
		for(i=0;i<n;i++)
		{
			cin>>l;
			a.push_back(l);
		}
		bool find = false;
		for(i=0;i<n;i++)
		{
			for(j=i+2;j<n;j++)
			{
				if(a[i]==a[j])
				{
					find = true;
					break;
				}
			}
			if(find)
				break;
		}
		if(find)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
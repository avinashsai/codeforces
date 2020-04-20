#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i,j,l;
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

		bool found = true;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if((abs(a[i]-a[j]))%2!=0)
				{
					found = false;
					break;
				}
			}
			if(!found)
				break;
		}
		if(!found)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}
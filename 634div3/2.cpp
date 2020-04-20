#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,n,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b;
		int counter;
		for(i=0;i<n;)
		{
			counter = 0;
			while(counter<b&&i<n)
			{
				cout<<char(counter+97);
				counter++;
				i++;
			}
		}
		cout<<endl;
	}
	return 0;
}
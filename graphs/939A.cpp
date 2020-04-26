#include<bits/stdc++.h>
using namespace std;
#define MAX 5000
int main()
{
	int n,i;
	int graph[MAX];
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>graph[i];
	for(i=1;i<=n;i++)
	{
		if(graph[graph[graph[i]]]==i)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
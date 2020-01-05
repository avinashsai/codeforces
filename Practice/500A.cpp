#include<bits/stdc++.h>
using namespace std;
bool makedfs(vector<int> net[],int u,vector<bool> &visited,int ind)
{
	bool res=false;
	visited[u] = true;
	for(int j=0;j<net[u].size();j++)
	{
		if(net[u][j]==ind)
		return true;
		if(visited[net[u][j]]==false)
		res = makedfs(net,net[u][j],visited,ind);
	}
	return res;
}
bool dfs(vector<int> net[],int n,int ind)
{
	vector<bool> visited(n,false);
	if(makedfs(net,0,visited,ind))
	return 1;
	return 0;
}
int main()
{
	int n,l,ind;
	cin>>n>>ind;
	vector<int> net[n];
	for(int i=1;i<n;i++){
		cin>>l;
	net[i-1].push_back(i+l-1);
}
if(dfs(net,n,ind-1))
cout<<"YES";
else
cout<<"NO";
return 0;
}

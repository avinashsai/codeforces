#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

int dfs(int start,int n,vector<int> graph[])
{
	stack<int> ind;
	ind.push(start);
	vector<bool> visited(MAX,false);
	while(!ind.empty())
	{
		start = ind.top();
		ind.pop();
		if(!visited[start]){
		visited[start] = true;
		//cout<<start<<" ";
		for(auto i=graph[start].begin();i!=graph[start].end();i++)
		   ind.push(*i);
	}
	}
	return start;
}
int main()
{
	int n,i,fi,start;
	cin>>n;
	vector<int> graph[n];
	for(i=1;i<=n;i++)
	{
		cin>>fi;
		graph[i-1].push_back(fi-1);
	}
	for(i=0;i<n;i++){
		start = dfs(i,n,graph);
		cout<<start+1<<" ";
	}
	return 0;
}
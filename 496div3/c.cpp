#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize ("-Ofast")
#define ll long long int
using namespace std;
ll a[120000];
int main()
{
  ll n,i,j,c=0,max=-1;
  cin>>n;
  map<ll,int> p;
  for(i=0;i<n;i++){
  	cin>>a[i];
  	if(p.count(a[i]))
  		p[a[i]]+=1;
  	else
  		p.insert(pair<ll,int> (a[i],1));
  	if(max<a[i])
  		max=a[i];
  }
  int md = (int)log2(max)+1;
  //cout<<md;
  ll d[md+1];
  d[0]=1;
  for(j=1;j<=md;j++)
  	d[j]=(d[j-1]<<1);
  for(i=0;i<n;i++)
  {
  	bool f=0;
        for(j=1;j<=md;j++)
        {
        	if(a[i]>=d[j])
        		continue;
        	if(p.count(d[j]-a[i]))
        	{
        		if(d[j]-a[i]!=a[i]){
        		f=1;break;}
        		else 
        		{
        			if(p[d[j]-a[i]]>1)
        			{
        				f=1;
        				break;
        			}
        		}
        	}
        }
        if(!f)
        	c++;
  }
  cout<<c;
  return 0;
}

#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int n,m,i,j,c=0,ans;
	string p,s;
	cin>>s>>p;
	n=s.length();
	m=p.length();
	if(s.compare(p)==0)
		cout<<"0";
	else
	{
	if(s[n-1]!=p[m-1])
		cout<<m+n;
	else
	{
	if(n>m)
	{
		i=m-1;
		for(j=n-1;j>=0;j--)
		{
			if(s[j]==p[i])
				i--;
			else
				break;
		}
		ans=i+j+2;
	}
	else
	{
	   i=n-1;
		for(j=m-1;j>=0;j--)
		{
			if(s[i]==p[j])
				i--;
			else
				break;
		}
	ans=i+j+2;
	}
	cout<<ans;
}
}
	return 0;
}
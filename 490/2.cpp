#include<bits/stdc++.h>
using namespace std;
string rever(string s,int end,int len)
{
	string p = s.substr(0,end+1);
	//cout<<p<<" ";
	string rem = s.substr(end+1,len);
	reverse(p.begin(),p.end());
	
	s = " ";
	s = p+rem;
	return s;
}
int main()
{
	int n,i,j;
	string s;
	cin>>n>>s;
	//reverse(s.begin(),s.end());
	//cout<<s<<" ";
	for(i=1;i<n;i++)
	{
		if(n%i==0){
			s = rever(s,i-1,n);
			//cout<<s<<" ";
		}
	}
	reverse(s.begin(),s.end());
	cout<<s;
	return 0;
}
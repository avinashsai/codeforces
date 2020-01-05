#include<bits/stdc++.h>
using namespace std;
struct sm
{
	int ch;
	int cnt;
};
sm a[26];
bool compare(sm a1,sm a2)
{
	return a1.cnt<a2.cnt;
}
int main()
{
	string s;
	int i,n,k,curcnt=0;
	for(i=0;i<26;i++)
	{
	a[i].cnt = 0;
	a[i].ch = i;
	}
	cin>>s>>k;
	n = s.length();
	for(i=0;i<n;i++){
		if(a[s[i]-'a'].cnt==0)
		curcnt+=1;
	a[s[i]-'a'].cnt+=1;
}
if(k>n){
cout<<"impossible";
return 0;
}
if(curcnt>=k)
cout<<"0";
else
cout<<k-curcnt;
	return 0;
}

#include<bits/stdc++.h>
#define l long int
using namespace std;

bool compare(pair <char,int> p1,pair <char,int> p2)
{
	if(p1.second<p2.second)
		return 1;
	return 0;
}
int main()
{
	string s;
	l n,i,k;
	cin>>n>>k>>s;
	vector< pair <char,int> > vect;
	
    for(i=0;i<n;i++)
     vect.push_back(make_pair(s[i],i));
    sort(vect.begin(),vect.end());
    
    sort(vect.begin()+k,vect.end(),compare);
    for(i=k;i<n;i++)
    	cout<<vect[i].first;
	return 0;
}
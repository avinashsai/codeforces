#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,a[100],s[101]={0};
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int c=0;
	for(int i=0;i<n;i++){
		if(s[a[i]]==0){
			c++;
		}
		++s[a[i]];
	}
	if(c<k){
		cout<<"NO";	
	}
	else
	{
		cout<<"YES"<<endl;
      for(int i=0;i<n&&k!=0;i++)
      	if(s[a[i]]){
      		cout<<i+1<<" ";
      	s[a[i]]=0;
      	k--;
      }
	}
	
	return 0;
}
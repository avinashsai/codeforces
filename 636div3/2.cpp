#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i,l;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%4!=0)
			cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
			long long sum1 = 0,sum2 = 0;
			for(i=1;i<=n/2;i++){
				cout<<i*2<<" ";
				sum1+=i*2;
			}
			for(i=1;i<n/2;i++){
				cout<<2*(i-1)+1<<" ";
			sum2+=(2*(i-1)+1);}
			cout<<sum1 - sum2<<endl;
		}
	}
	return 0;
}
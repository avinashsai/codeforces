#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	int t;
	ll n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll num=4,temp;
		for(int i=2;i<=32;i++)
		{
			temp = num-1;
			if(n%temp==0){
				cout<<n/temp<<endl;
				break;
			}
			num = num*2;
		}
	}
	return 0;
}
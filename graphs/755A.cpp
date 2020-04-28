#include<bits/stdc++.h>
using namespace std;


int main()
{
	int i,j,n;
	vector<bool> a(1000001,true);
	a[1] = false;
	for(i=2;i*i<=1000001;i++)
	{
		if(a[i]==true)
		{
			for(j=i*2;j<=1000001;j=j+i)
				a[j] = false;
		}
	} 
	cin>>n;
	for(int i=1;i<=1000;i++)
	{
		if(!a[n*i+1])
		{
			cout<<i;
			return 0;
		}
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,c=0,k;
	cin>>n>>k;
	std::vector<int> a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	i=0;
	while(i<n)
	{
		if(a[i]<=k){
			c++;i++;
		}
		else
			break;
	}
	int j=n-1;
	while(j>i)
	{
		if(a[j]<=k)
		{
			c++,j--;
		}
		else
			break;
	}
   cout<<c;
   return 0;
}
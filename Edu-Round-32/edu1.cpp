#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0,i;
	cin>>n;
	vector<int>a(n);
	for(i=0;i<n;i++)
	cin>>a[i];
	if(n<=2)
	cout<<"0";
	else
	{
		for(i=1;i<n-1;i++)
		if((a[i]>a[i-1]&&a[i]>a[i+1])||(a[i]<a[i-1]&&a[i]<a[i+1]))
		c++;
		cout<<c;
		
	}
	return 0;
}

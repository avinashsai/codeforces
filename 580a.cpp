#include<iostream>
using namespace std;
int main()
{
	long long int a[100000],n,i,max=-1,pre,s=1;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	pre=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>=pre)
		s++;
		else
		{
			if(max<s)
			max=s;
			s=1;
		}
		pre=a[i];
	}
	if(max<s)
	max=s;
	cout<<max;
	return 0;
}

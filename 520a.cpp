#include<iostream>
using namespace std;
int main()
{
	int a[26]={0},i=0,n,flag=0;
	char b[100];
	cin>>n>>b;
	while(i<n)
	{
		if(b[i]<97)
		{
			++a[b[i]-65];
		}
		else
		++a[b[i]-97];
		i++;
	}
	for(i=0;i<26;i++)
	{
		if(a[i]==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int b[26]={0};
	long int n,i,j,flag=0;
	char a[50000];
	cin>>a;
	for(i=0;i<n-26+1;i++)
	{
		flag=0;
		for(j=i;j<i+26;j++)
		{
			if(b[a[j]-65]==1)
			{
				flag=1;
				break;
			}
			else
			++b[a[j]-65];
		}
		if(!flag)
		{
			for(j=i;j<i+26;j++)
			{
				if(a[j]!='?')
				cout<<a[j];
			}
		}
	}
}

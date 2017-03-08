#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[100000],b[10000];
	int i=0,j=0,n,m,i1=0,c[100],k=0,flag=0;
	cin>>a>>b;
	n=strlen(a);
	m=strlen(b);
	while(i<n&&j<m)
	{
		if(a[i]==b[j])
		{
			i++;j++;
		}
		else
		{
			if(i1==0)
			i1=i;
			else
			{
				if(a[i1]==a[i])
				{
					c[k++]=i1+1;
					i1=i;
				}
				else
				{
					flag=1;break;
				}
			}
			i++;
		}
	}
	if(flag)
	cout<<"0";
	else
	{
		cout<<i1<<"\n";
		for(i=0;i<k;i++)
		cout<<c[i]<<" ";
	}
	return 0;
}

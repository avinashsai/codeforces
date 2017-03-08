#include<iostream>
using namespace std;
int main()
{
	char a[100][100];
	int m,n,i,j,flag=0;
	cin>>m>>n;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];
	i=0;
	for(j=0;j<n-1;j++)
	{
		if(a[i][j]!=a[i][j+1])
		{
			flag=1;break;
		}
	}
	if(!flag)
	{
		for(i=1;i<m;i++)
		{
			if(a[i][0]!=a[i-1][0])
			{
				for(j=0;j<n-1;j++)
				{
					if(a[i][j]!=a[i][j+1])
					{
						flag=1;break;
					}
				}
			}
			else
			{
				flag=1;break;
			}
			if(flag)
			break;
		}
	}
	if(!flag)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}

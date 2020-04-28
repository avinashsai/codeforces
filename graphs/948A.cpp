#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,r,c;
	bool isthere=false;
	cin>>r>>c;
	char a[r+2][c+2];
	for(i=0;i<c+2;i++)
		{
			a[0][i] = 'd';
			a[r+1][i] = 'd';
		}
	for(i=0;i<r+2;i++)
		{
			a[i][0] = 'd';
			a[i][c+1] = 'd';
		}
	for(i=1;i<=r;i++)
		for(j=1;j<=c;j++)
			cin>>a[i][j];
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(a[i][j]=='S' && (a[i-1][j]=='W' || a[i+1][j]=='W' || a[i][j-1]=='W' || a[i][j+1]=='W'))
			{
				isthere = true;
				break;
			}
			else if(a[i][j]=='.')
				a[i][j]='D';
		}
		if(isthere)
			break;
	}
	if(isthere)
		cout<<"No";
	else
	{
		cout<<"Yes"<<endl;
		for(i=1;i<=r;i++)
		{
			for(j=1;j<=c;j++)
				cout<<a[i][j];
			cout<<endl;
		}
	}
	return 0;
}
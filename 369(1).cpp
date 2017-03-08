#include<iostream>
using namespace std;
int main()
{
	char a[1000][5];
	int flag=0,i,n,j;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=5;j++)
		cin>>a[i][j];
	}
	for(i=1;i<=n;i++)
	{
		if(a[i][1]=='O'&&a[i][2]=='O'&&!flag)
		{
			flag=1;
			a[i][1]='+';a[i][2]='+';break;
		}
		else if(a[i][4]=='O'&&a[i][5]=='O'&&!flag)
		{
			flag=1;
			a[i][4]='+';
			a[i][5]='+';break;
		}
	}
	if(!flag)
	cout<<"NO\n";
	else
	{
		cout<<"YES\n";
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=2;j++)
			cout<<a[i][j];
			cout<<"|";
			for(j=4;j<=5;j++)
			cout<<a[i][j];
			cout<<"\n";
		}
	}
	return 0;
}

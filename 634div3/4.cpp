#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
		char a[9][9];
		for(i=0;i<9;i++)
			for(j=0;j<9;j++)
				cin>>a[i][j];

		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				if(a[i][j]=='1')
					cout<<"2";
				else
					cout<<a[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
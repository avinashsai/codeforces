#include<iostream>
using namespace std;
int main()
{
	int a,b,i,j,k=0;
	cin>>a>>b;
	for(i=1;i<=a;i++)
	{
		if(i%2==1)
		{
			for(j=1;j<=b;j++)
			cout<<"#";
		}
		else
		{
			if(k==0)
			{
				for(j=1;j<b;j++)
				cout<<".";
				cout<<"#";
				k=1;
			}
			else
			{
				cout<<"#";
				for(j=2;j<=b;j++)
				cout<<".";
				k=0;
			}
		}
		cout<<"\n";
	}
	return 0;
}

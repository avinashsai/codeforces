#include<iostream>
using namespace std;
int main()
{
	char a[100];
	int i,n,flag=0;
	cin>>a;
	while(a[i]!='\0')
	{
		if(a[i]=='6')
		{
			if(a[i+1]=='6'&&a[i+2]=='6')
			{
				flag=1;
				break;
			}
		}
		i++;
	}
	if(flag=1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}

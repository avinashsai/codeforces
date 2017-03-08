#include<iostream>
using namespace std;
int main()
{
	char a[6];
	int b,i;
	cin>>b>>a;
	if(b==12)
	{
		if(a[0]>'1'&&a[0]<='9')
		a[0]='0';
		if(a[3]>='6'&&a[3]<='9')
		a[3]='0';
	}
	else
	{
		if(a[0]>'3'&&a[3]<='9')
		a[0]='0';
		if(a[3]>='6'&&a[3]<='9')
		a[3]='0';
	}
	for(i=0;a[i]!='\0';i++)
	cout<<a[i];
	return 0;
}

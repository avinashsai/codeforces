#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[20];
	int n,i;
	cin>>a;
	n=strlen(a);
	i=n/2-1;
	while(i>=0)
	{
	cout<<a[i];
	i--;
}
i=n-1;
while(i>=n/2)
{
	cout<<a[i];
	i--;
}
return 0;
}

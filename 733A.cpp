#include<iostream>
#include<limits.h>
#include<string.h>
using namespace std;
int main()
{
	char a[100];
	int i=0,n,max=INT_MIN,pre=-1;
	cin>>a;
	while(a[i]!='\0')
{
	if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
	{
		if(pre==-1)
		{
		pre=i;
		max=pre+1;
	}
	else
	{
		if((i-pre)>max)
		max=(i-pre);
	}
	pre=i;
	}
	i++;
}
if(max==INT_MIN)
cout<<strlen(a)+1;
else
cout<<max;
}

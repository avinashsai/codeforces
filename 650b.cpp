#include<iostream>
using namespace std;
int main()
{
	long long int n,a,b,t,i=0;
	char c[50000];
	cin>>n>>a>>b>>t;
	cin>>c;
	if(b>t||a>t)
	cout<<"0";
	else
	{
	if(c[0]=='w')
	t=t-(b+1);
	else
	t=t-1;
	t=t-a;
	while(t>0&&c[i]!='\0')
	{
		i++;
		if(c[i]=='w')
		t=t-b;
		t=t-a;
	}
	if(c[i]=='\0')
	cout<<n;
	else
	cout<<i+1;
}
	return 0;
}

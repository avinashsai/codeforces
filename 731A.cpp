#include<iostream>
#include<math.h>
using namespace std;
int min(int c,int d)
{
if(c<=d)
return c;
else
return d;
}
int main()
{
	char b[100],pre='a';
	int i=0,n,sum=0;
	cin>>b;
	while(b[i]!='\0')
	{
		if(pre<=b[i])
		{
			sum=sum+min((b[i]-pre),(1+(pre-'a')+('z'-b[i])));
		}
		else
		{
			sum=sum+min((pre-b[i]),(1+('z'-pre)+(b[i]-'a')));
		}
		pre=b[i];
		i++;
	}
	cout<<sum;
	return 0;
}

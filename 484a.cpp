#include<iostream>
using namespace std;
int count(long long int n)
{
	int x=0;
	while(n!=0)
	{
		n=(n & (n-1));
		x++;
	}
	return  x;
}
int main()
{
	long long int a,b,max,i,no,k,p;
	cin>>no;
	while(no--)
	{
		max=-1;
		cin>>a>>b;
		for(i=a;i<=b;i++)
		{
			k=count(i);
			if(k>max)
			{
				max=k;
				p=i;
			}
		}
		cout<<p<<"\n";
	}
	return 0;
}

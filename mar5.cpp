#include<iostream>
using namespace std;
int main()
{
	char a[1000000];
	long int n,k,no,i,z,o;
	cin>>no;
	while(no--)
	{
		cin>>n>>k>>a;
		if(k<=1)
		cout<<a<<"\n";
		else
		{
			z=0,o=0;
			for(i=0;i<n;i++)
			{
				if(a[i]=='1')
				o++;
				else
				z++;
			}
			if(z>=o)
			{
				if(ceil(z/o)<=k)
				{
					int c=ceil(z/o);
					for(i=0;i<)
				}
			}
		}
	}
	return 0;
}

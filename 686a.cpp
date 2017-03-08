#include<iostream>
using namespace std;
int main()
{
	long long int x,n,d=0,t;
	char c;
	cin>>n>>x;
	while(n--)
	{
		cin>>c>>t;
		if(c=='+')
		{
			x=x+t;
		}
		else if(c=='-')
		{
			if(x>=t)
			{
				x=x-t;
			}
			else
			d++;
		}
		
	}
	cout<<x<<" "<<d;
	return 0;
}

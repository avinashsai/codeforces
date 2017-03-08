#include<iostream>
using namespace std;
int main()
{
	long long int pre,curr,c,n,count=1,i=2;
	cin>>n>>c;
	cin>>pre;
	while(i<=n)
	{
		cin>>curr;
		if(curr-pre<=c)
		{
			count++;
		}
		else
		{
			count=1;
		}
		pre=curr;
		i++;
	}
	cout<<count;
	return 0;
}

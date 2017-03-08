#include<iostream>
using namespace std;
int main()
{
	long long int x,no,sum=0,s=0;
	cin>>no;
	while(no--)
	{
		cin>>x;
		if(x>0)
		sum=sum+x;
		else if(sum==0&&x<0)
		s++;
		else
		sum--;
	}
	cout<<s<<"\n";
	return 0;
}

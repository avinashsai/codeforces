#include<iostream>
using namespace std;
int main()
{
	long long int sum=0,i=1;
	char ch;
	cin>>ch;
	sum=sum+ch;
	while(ch!='\n')
	{
		cin>>ch;
		sum=sum+ch;
	}
	cout<<sum;
	return 0;
}

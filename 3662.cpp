#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	cout<<"I hate ";
	for(i=2;i<=n;i++)
	{
		if(i&1)
		cout<<"that I hate ";
		else
		cout<<"that I love ";
	}
	cout<<"it";

	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	long long int n,k,p;
	cin>>n>>k;
	p=n%k;
	k=k-p;
	cout<<n+k;
	return 0;
}

#include<iostream>
#define sunday 1
#define monday 2
#define tuesday 3
#define wednesday 4
#define thursday 5
#define friday 6
#define saturday 7
using namespace std;
int main()
{
	char a[10],b[10];
	cin>>a>>b;
	if(a-b==4||a-b==3||a==b||a-b==1)
	cout<"YES";
	else
	cout<<"NO";
	return 0;
}

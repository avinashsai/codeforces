#include<bits/stdc++.h>
using namespace std;
int main()
{
	int no,h,m;
	cin>>no;
	while(no--)
	{
		cin>>h>>m;
		cout<<24*60-(h*60+m)<<endl;
	}
	return 0;
}

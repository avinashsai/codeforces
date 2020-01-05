#include<bits/stdc++.h>
using namespace std;
struct lap
{
	int p;
	int q;
};
lap a[100000];
bool compare(lap a1,lap a2)
{
	return a1.p<a2.p;
}
int main()
{
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i].p>>a[i].q;
	sort(a,a+n,compare);
	bool exist = false;
	for(i=0;i<n-1;i++)
	{
		if(a[i].q>a[i+1].q)
		{
			cout<<"Happy Alex";
			return 0;
		}
	}
	cout<<"Poor Alex";
	return 0;
}

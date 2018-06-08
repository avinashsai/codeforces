#include<bits/stdc++.h>
using namespace std;
struct str
{
	string s;
	int len;
};
bool substring(string e,string f)
{
	int l2 = e.length();
	int l1 = f.length();
		bool flag=0;
		int i,j;
		for(i=0;i<l1-l2+1;i++)
		{
			flag=0;
			for(j=0;j<l2;j++)
			{
				if(e[j]!=f[i+j])
				{
					flag=1;break;
				}
			}
			if(!flag)
              break;
		}
		if(!flag)
			return 1;
		else
			return 0;
	
}
bool compare(str c,str d)
{
	if(c.len<d.len)
		return 1;
	return 0;
}
int main()
{
	str a[1000];
	string b;
	int i,n;
	cin>>n;
	for(i=0;i<n;i++)
		{
			cin>>a[i].s;
			a[i].len = (a[i].s).length();
		}
		sort(a,a+n,compare);
		//cout<<a[0].s<<endl;
		bool flag=0;
	for(i=0;i<n-1;i++)
	{
		if(!substring(a[i].s,a[i+1].s))
		{
			flag=1;
			break;
		}
	}
	if(flag)
		cout<<"NO";
	else
    {
    	cout<<"YES"<<endl;
    	for(i=0;i<n;i++)
    		cout<<a[i].s<<endl;
    }
    return 0;
}
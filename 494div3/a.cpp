#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max=-1,i,l;
    int a[101]={0};
    cin>>n;
    for(i=0;i<n;i++)
    {
    	cin>>l;
    	++a[l];
    }
    for(i=1;i<=100;i++)
    {
    	if(a[i]>max){
    	max=a[i];}
    }
    cout<<max;
    return 0;
}
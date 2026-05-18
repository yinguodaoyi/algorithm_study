#include<iostream>
using namespace std;
const int N=100010;
int a[N],b[N];
int n;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		int minn=0x3f3f3f3f;
		int id=0;
		for(int j=1;j<=n;j++)
		{
			if(a[j]<minn)
			{
				minn=a[j];
				id=j;
			}
		}
		a[id]=0x3f3f3f3f;
		b[i]=minn;
	}
	for(int i=1;i<=n;i++) cout<<b[i]<<" ";
}

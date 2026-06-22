#include<iostream>
#include<string>
#include<string.h>
using namespace std;
const int maxn=100;
struct bigint{
	int len;
	int a[maxn];
	bigint(int x=0)
	{
		memset(a,0,sizeof(a));
		for(len=1;x;len++)
		{
			a[len]=x%10,x/=10;
		}
		len--;
	}
	int &operator[](int i)
	{
		return a[i];
	}
	void flatten(int L)
	{
		len=L;
		for(int i=1;i<=len;i++)
		{
			a[i+1]+=a[i]/10;
			a[i]%=10;
		}
		for(;!a[len];)
		{
			len--;
		}
	}
	void print()
	{
		for(int i=max(len,1);i>=1;i--)
		{
			printf("%d",a[i]);
		}
	}
};
bigint operator+(bigint a,bigint b)
{
	bigint c;
	int len=max(a.len,b.len);
	for(int i=1;i<=len;i++)
	{
		c[i]+=a[i]+b[i];
	}
	c.flatten(len+1);
	return c;
}
bigint operator*(bigint a,int b)
{
	bigint c;
	int len=a.len;
	for(int i=1;i<=len;i++)
	{
		c[i]=a[i]*b;
	}
	c.flatten(len+11);
	return c;
}
int main()
{
	bigint ans(0),fac(1);
	int m;
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		fac=fac*i;
		ans=ans+fac;
	}
	ans.print();
}

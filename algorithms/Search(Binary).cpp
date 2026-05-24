#include<iostream>
#include<algorithm>//Built-in sorting function
using namespace std;
int n,k;
int a[1010];
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);//Built-in sorting function
	int l=1,r=n,mid,ans;
	while(l<=r)//Only effective for increments or decrements
	{
		mid=(l+r)/2;
		if(a[mid]>k) r=mid-1;
		else if(a[mid]<k) l=mid+1;
		else {ans=mid;r=mid-1;};
	}
	cout<<ans<<"\n";
}

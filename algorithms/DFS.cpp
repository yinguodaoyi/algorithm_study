#include<iostream>
using namespace std;
int m,solution[103];
void dfs(int n, int i, int a)
{
  if (n==0)
  {
    for (int j=1;j<=i-1;++j)
    {
    	cout<<solution[j]<<" ";
	}
    cout<<"\n";
  }
  if (i<=m)
  {
    for(int j=a;j<=n;++j)
	{
      arr[i]=j;
      dfs(n-j,i+1,j);//find next number
    }
  }
}
int main()
{
	cin>>n>>m;
	dfs(n, 1, 1);
}

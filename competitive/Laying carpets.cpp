//L-shaped carpets are to be laid on a square plot of land; the carpets cannot overlap, and the position (x, y) cannot be covered by a carpet.
#include<iostream>
using namespace std;
void dfs(int x,int y,int a,int b,int l)
/*
{x,y}不能铺地毯
目前铺地毯位置为{a,b}~{a+l,b+l}
*/
{
    if(l==1) return ;

    if(x-a<=l/2-1 && y-b<=l/2-1)
    {
        cout<<a+l/2<<" "<<b+l/2<<" 1\n";
        dfs(x,y,a,b,l/2);
        dfs(a+l/2-1,b+l/2,a,b+l/2,l/2);
        dfs(a+l/2,b+l/2-1,a+l/2,b,l/2);
        dfs(a+l/2,b+l/2,a+l/2,b+l/2,l/2);
    }
    else if(x-a<=l/2-1 && y-b>l/2-1)
    {
        cout<<a+l/2<<" "<<b+l/2-1<<" 2\n";
        dfs(a+l/2-1,b+l/2-1,a,b,l/2);
        dfs(x,y,a,b+l/2,l/2);
        dfs(a+l/2,b+l/2-1,a+l/2,b,l/2);
        dfs(a+l/2,b+l/2,a+l/2,b+l/2,l/2);
    }
    else if(x-a>l/2-1 && y-b<=l/2-1)
    {
        cout<<a+l/2-1<<" "<<b+l/2<<" 3\n";
        dfs(a+l/2-1,b+l/2-1,a,b,l/2);
        dfs(a+l/2-1,b+l/2,a,b+l/2,l/2);
        dfs(x,y,a+l/2,b,l/2);
        dfs(a+l/2,b+l/2,a+l/2,b+l/2,l/2);
    }
    else
    {
        cout<<a+l/2-1<<" "<<b+l/2-1<<" 4\n";
        dfs(a+l/2-1,b+l/2-1,a,b,l/2);
        dfs(a+l/2-1,b+l/2,a,b+l/2,l/2);
        dfs(a+l/2,b+l/2-1,a+l/2,b,l/2);
        dfs(x,y,a+l/2,b+l/2,l/2);
    }
}
int k,x,y;
int main()
{
    cin>>k>>x>>y;
    dfs(x,y,1,1,1<<k);
} 

#include<iostream>
#include<queue>
using namespace std;
int vis[1010][1010];
int mp[1010][1010];
int yd[4][2]={
	{1,0},
	{0,1},
	{-1,0},
	{0,-1}
};
queue<pair<int,int> > q;
int x,y,l,m;//start at(x,y),end at (l,m);
int n;
bool get=false;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>mp[i][j];
		}
	}
	cin>>x>>y>>l>>m;
	q.push({x,y});
	vis[x][y]=1;
	while(!q.empty())
	{
		int nx=q.front().first,ny=q.front().second;
		q.pop();
		for(int i=0;i<4;i++)
		{
			int tx=nx+yd[i][0],ty=ny+yd[i][1];
			if(tx>n || tx<=0) continue;
			if(ty>n || ty<=0) continue;
			if(mp[tx][ty]) continue;
			if(vis[tx][ty]) continue;
			vis[tx][ty]=vis[nx][ny]+1;
			q.push({tx,ty});
			if(tx==l && ty==m)
			{
				get=true;
				break;
			}
		}
		if(get) break;
	}
	cout<<vis[l][m]-1<<"\n";
}

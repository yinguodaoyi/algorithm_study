//maze with more floor 
#include<iostream>
#include<queue>
using namespace std;
int vis[110][110][110];
int mp[110][110][110];
int yd[8][3]={
	{1,0,0},
	{0,1,0},
	{-1,0,0},
	{0,-1,0},
	{1,0,1},
	{0,1,1},
	{-1,0,1},
	{0,-1,1}
};
queue<pair<pair<int,int>,int> > q;//{{x,y},z}
int x,y,z,l,m,r;//start at(x,y,z),end at (l,m,r);
int n;
bool get=false;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int k=1;k<=n;k++)
			{
				cin>>mp[i][j][k];
			}
		}
	}
	cin>>x>>y>>z>>l>>m>>r;
	q.push({{x,y},z});
	vis[x][y][z]=1;
	while(!q.empty())
	{
		int nx=q.front().first.first,ny=q.front().first.second,nz=q.front().second;
		q.pop();
		for(int i=0;i<8;i++)
		{
			int tx=nx+yd[i][0],ty=ny+yd[i][1],tz=nz+yd[i][2];
			if(tx>n || tx<=0) continue;
			if(ty>n || ty<=0) continue;
			if(tz>n || tz<=0) continue;
			if(mp[tx][ty][tz]) continue;
			if(vis[tx][ty][tz]) continue;
			vis[tx][ty][tz]=vis[nx][ny][nz]+1;
			q.push({{tx,ty},tz});
			if(tx==l && ty==m && tz==r)
			{
				get=true;
				break;
			}
		}
		if(get) break;
	}
	cout<<vis[l][m][r]-1<<"\n";
}

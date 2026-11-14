#include<iostream>
#include<vector>
using namespace std;
int mp1[1010][1010];
vector<pair<int,int> > mp2[1010];
int n,m;//n points,m edges
int main()
{
	cin>>n>>m;
	//1.Adjacency matrix
	for(int i=1;i<=m;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		if(u==v) mp1[u][v]=min(mp1[u][v],w);//Self-loops and non-negative cycles are not taken into account (for shortest path problems).
		else mp1[u][v]=mp1[v][u]=min(mp1[u][v],w);//Preventing multiple edges.
	}
	//2.Adjacency list
	for(int i=1;i<=m;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		mp2[u].push_back({v,w});
		mp2[v].push_back({u,w});
	}
}

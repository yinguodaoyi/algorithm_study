#include<iostream>
#include<queue>
using namespace std;
vector<pair<int,int> > mp[1010];
int vis[1010];
int n,m;
int s,e;
priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > q;
int main()
{
	cin>>n>>m>>s>>e;
	for(int i=1;i<=m;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		mp[u].push_back({v,w});
		mp[v].push_back({u,w});
	}
	q.push({1,s});
	while(!q.empty())
	{
		int now=q.top().second,cost=q.top().first;
		q.pop();
		if(vis[now]) continue;
		vis[now]=cost;
		for(auto i:mp[now])
		{
			if(vis[i.first]) continue;
			else q.push({cost+i.second,i.first});
		}
	}
	cout<<vis[e]-1;
}

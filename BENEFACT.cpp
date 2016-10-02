#include<bits/stdc++.h>
using namespace std;
vector< pair<int,int> > g[1000001];
bool vis[1000001];
int dist[1000001];
int n;
int bfs(int a)
{
queue<int> q;

q.push(a);

memset(vis,0,sizeof vis);

int temp;
vis[a]=true;
dist[a]=0;
memset(dist,0,sizeof dist);

while(!q.empty())
{
    temp = q.front();
    q.pop();

    for(int i=0;i<g[temp].size();i++)
    {
        if(!vis[g[temp][i].first]){
        q.push(g[temp][i].first);
        dist[g[temp][i].first] += dist[temp]+g[temp][i].second;
        vis[g[temp][i].first]=true;
        }
    }
}

int r=INT_MIN;
int j=1;
for(int i=1;i<=n;i++)
{
    if(dist[i]>r){
        r=dist[i];
        j=i;
    }
}

return j;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        memset(g,0,sizeof g);

        cin>>n;
        for(int i=0;i<n-1;i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            g[a].push_back(make_pair(b,c));
            g[b].push_back(make_pair(a,c));

        }
        int bal = bfs(1);
        //cout<<bal<<endl;
        int ans = bfs(bal);

       // for(int i=0;i<=n;i++)
        cout<<dist[ans]<<endl;
    }
}

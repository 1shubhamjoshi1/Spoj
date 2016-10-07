#include<bits/stdc++.h>
using namespace std;

int n,m;

bool isSafe(int i,int j)
{
    return (i<n and i>=0 and j >=0 and j<m);

}
main()
{
    int t;
    cin>>t;
    while(t--)
    {

        cin>>n>>m;
        queue< pair<int,pair<int,int> > > q;
        int dist[200][200];
        char str[200];
        memset(dist,0,sizeof dist);

        for(int i=0;i<n;i++)
        {

            cin>>str;
            for(int j=0;j<m;j++)
            {

                dist[j][i]=INT_MAX;
                if(str[j]=='1')
                    q.push(make_pair(j,make_pair(i,0)));
            }

        }



        while(!q.empty())
        {
             pair<int,pair<int,int> > p = q.front();
             q.pop();

             if(p.first<0)continue;
             if(p.first>=m)continue;
             if(p.second.first<0)continue;
             if(p.second.first>=n)continue;

             if(dist[p.first][p.second.first]<=p.second.second)continue;

              dist[p.first][p.second.first]=p.second.second;
              q.push(make_pair(p.first-1,make_pair(p.second.first,p.second.second+1)));
              q.push(make_pair(p.first,make_pair(p.second.first-1,p.second.second+1)));
              q.push(make_pair(p.first+1,make_pair(p.second.first,p.second.second+1)));
              q.push(make_pair(p.first,make_pair(p.second.first+1,p.second.second+1)));

/*
             int x[] = {0,0,-1,1};
             int y[] = {1,-1,0,0};
             for(int i=0;i<4;i++)
             {
                if(isSafe(p.first+x[i],p.second.first+y[i]))
                {
                    q.push(make_pair(p.first+x[i],make_pair(p.second.first+y[i],p.second.second+1)));
                }
             }
             */
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            cout<<dist[i][j]<<" ";
            cout<<endl;
        }
    }
}

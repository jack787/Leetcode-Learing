#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=510,M=1e5+10;
int g[N][N];
const int inf=0x3f3f3f3f;
int d[N];
bool st[N];
int dijkstra()
{
        memset(d,0x3f,sizeof d);
        d[1]=0;
        for(int i=0;i<n-1;i++)
        {
            int t=-1;
            for(int j=1;j<=n;j++)
            {
                if(!st[j]&&(t==-1||d[j]<d[t]))
                t=j;
            }
            if(t==-1)break;
            st[t]=true;
            for(int j=1;j<=n;j++)
            d[j]=min(d[j],g[t][j]+d[t]);
        }
        if(d[n]==inf)return -1;
        return d[n];
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j)g[i][j]=0;
            else g[i][j]=inf;
        }
    }
    while(m--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        g[a][b]=min(c,g[a][b]);
    }
    cout<<dijkstra()<<endl;
    return 0;
}
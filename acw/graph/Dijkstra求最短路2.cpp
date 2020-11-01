#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10000;
const int inf= 0x3f3f3f3f;
typedef long long ll;
typedef pair<int,int> PII;
inline ll read();
//#define LOCAL
int n,m;
int h[N],ne[N],e[N],w[N],idx;
void add(int a,int b,int c)
{
    e[idx]=b,w[idx]=c,ne[idx]=h[a],h[a]=idx++;
}
struct node
{
    int dis,cnt;
    bool operator<(const node&w)const{
        return dis>w.dis;
    }
};
ll d[N];
bool st[N];
int dijkstra()
{
    for(int i=1;i<=n;i++)
    d[i]=inf;
    d[1]=0;
    priority_queue<node> q;
    q.push({0,1});
    while(q.size())
    {
        auto t=q.top();
        q.pop();
        int ver=t.cnt,dis=t.dis;
        if(st[ver])continue;
        st[ver]=true;
        for(int i=h[ver];~i;i=ne[i])
        {
            int j=e[i];
            if(d[j]>d[ver]+w[i])
            {
                d[j]=d[ver]+w[i];
                q.push({d[j],j});
            }
        }
    }
    if(d[n]==inf)return -1;
    return d[n];

}
int main() {
#ifdef LOCAL
    freopen("E:/Cpp/1.in", "r", stdin);
    freopen("E:/Cpp/1.out", "w", stdout);
#endif
    cin>>n>>m;
    memset(h,-1,sizeof h);
    while(m--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        add(a,b,c);
    }
    cout<<dijkstra()<<endl;
    //cout<<inf<<endl;
   // cout<<d[n]<<endl;



    return 0;
}








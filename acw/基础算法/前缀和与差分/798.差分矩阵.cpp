#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
const int inf= 0x3f3f3f3f;
typedef long long ll;
typedef pair<int,int> PII;
inline ll read();
//#define LOCAL
int n,m,q;
int chafen[N][N];
void insert(int x1,int y1,int x2,int y2,int c)
{
    chafen[x1][y1]+=c;
    chafen[x2+1][y1]-=c;
    chafen[x1][y2+1]-=c;
    chafen[x2+1][y2+1]+=c;
}
int main() {
#ifdef LOCAL
    freopen("E:/Cpp/1.in", "r", stdin);
    freopen("E:/Cpp/1.out", "w", stdout);
#endif
    cin>>n>>m>>q;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            int t;
            cin>>t;
            insert(i,j,i,j,t);
        }
    while(q--)
    {
        int x1,y1,x2,y2,c;
        cin>>x1>>y1>>x2>>y2>>c;
        insert(x1,y1,x2,y2,c);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            chafen[i][j]+=chafen[i-1][j]+chafen[i][j-1]-chafen[i-1][j-1];
            printf("%d ",chafen[i][j]);
        }
        puts("");
    }




    return 0;
}












inline ll read(){ ll x=0,f=1; char c=getchar();
for(;!isdigit(c);c=getchar()) if(c=='-') f=-1;
for(;isdigit(c);c=getchar()) x=x*10+c-'0'; return x*f;
} 
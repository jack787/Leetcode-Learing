#include <bits/stdc++.h>
using namespace std;
const int N = 10;
const int inf= 0x3f3f3f3f;
typedef long long ll;
typedef pair<int,int> PII;
inline ll read();
//#define LOCAL
int path[N];
int n;
void dfs(int u,int state)
{
    if(u==n){
        for(int i=0;i<n;i++)
        printf("%d ",path[i]);
        puts("");
        return ;
    }
    for(int i=0;i<n;i++)
    {
        if(!(state>>i&1))
        {
            path[u]=i+1;
            dfs(u+1,state+(1<<i));
        }
    }
}
int main() {
#ifdef LOCAL
    freopen("E:/Cpp/1.in", "r", stdin);
    freopen("E:/Cpp/1.out", "w", stdout);
#endif

    //int n;
    cin>>n;
    dfs(0,0);




    return 0;
}












inline ll read(){ ll x=0,f=1; char c=getchar();
for(;!isdigit(c);c=getchar()) if(c=='-') f=-1;
for(;isdigit(c);c=getchar()) x=x*10+c-'0'; return x*f;
} 
#include <bits/stdc++.h>
using namespace std;
const int N = 110;
const int inf= 0x3f3f3f3f;
typedef long long ll;
typedef pair<int,int> PII;
inline ll read();
//#define LOCAL
int n;
int f[N][N];
int g[N][N];
int main() {
#ifdef LOCAL
    freopen("E:/Cpp/1.in", "r", stdin);
    freopen("E:/Cpp/1.out", "w", stdout);
#endif
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        cin>>g[i][j];
    memset(f,0x3f,sizeof f);
    f[0][0]=f[0][1]=f[1][0]=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        f[i][j]=min(f[i-1][j],f[i][j-1])+g[i][j];
        cout<<f[n][n]<<endl;




    return 0;
}












inline ll read(){ ll x=0,f=1; char c=getchar();
for(;!isdigit(c);c=getchar()) if(c=='-') f=-1;
for(;isdigit(c);c=getchar()) x=x*10+c-'0'; return x*f;
} 
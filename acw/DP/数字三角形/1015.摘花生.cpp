#include <bits/stdc++.h>
using namespace std;
const int N = 110;
const int inf= 0x3f3f3f3f;
typedef long long ll;
typedef pair<int,int> PII;
inline ll read();
//#define LOCAL
int R,C;
int T;
int g[N][N];
int f[N][N];
int main() {
#ifdef LOCAL
    freopen("E:/Cpp/1.in", "r", stdin);
    freopen("E:/Cpp/1.out", "w", stdout);
#endif
    cin>>T;
    while(T--)
    {
        cin>>R>>C;
        for(int i=1;i<=R;i++)
            for(int j=1;j<=C;j++)
            cin>>g[i][j];
        memset(f,0,sizeof f);
        //f(i,j)=max(f(i-1,j)+a(i,j),f(i,j-1)+a(i,j))
        for(int i=1;i<=R;i++)
            for(int j=1;j<=C;j++)
            f[i][j]=max(f[i-1][j],f[i][j-1])+g[i][j];
        printf("%d\n",f[R][C]);
    }





    return 0;
}












inline ll read(){ ll x=0,f=1; char c=getchar();
for(;!isdigit(c);c=getchar()) if(c=='-') f=-1;
for(;isdigit(c);c=getchar()) x=x*10+c-'0'; return x*f;
} 
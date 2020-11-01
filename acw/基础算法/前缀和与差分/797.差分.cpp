#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
const int inf= 0x3f3f3f3f;
typedef long long ll;
typedef pair<int,int> PII;
inline ll read();
//#define LOCAL
int n,m;
int a[N];
void insert(int l,int r,int c)
{
    a[l]+=c,a[r+1]-=c;
}
int main() {
#ifdef LOCAL
    freopen("E:/Cpp/1.in", "r", stdin);
    freopen("E:/Cpp/1.out", "w", stdout);
#endif
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        int t;
    cin>>t;
    a[i]+=t;
    a[i+1]-=t;
    }
    while(m--)
    {
        int l,r,c;
        cin>>l>>r>>c;
        insert(l,r,c);
    }
    for(int i=1;i<=n;i++)
    {
        a[i]+=a[i-1];
        printf("%d ",a[i]);
    }





    return 0;
}












inline ll read(){ ll x=0,f=1; char c=getchar();
for(;!isdigit(c);c=getchar()) if(c=='-') f=-1;
for(;isdigit(c);c=getchar()) x=x*10+c-'0'; return x*f;
} 
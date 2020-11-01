#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
const int inf= 0x3f3f3f3f;
typedef long long ll;
typedef pair<int,int> PII;
inline ll read();
//#define LOCAL
int n,m,x;
int a[N];
int b[N];
int main() {
#ifdef LOCAL
    freopen("E:/Cpp/1.in", "r", stdin);
    freopen("E:/Cpp/1.out", "w", stdout);
#endif
    cin>>n>>m>>x;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int j=0;j<m;j++)
    cin>>b[j];
    int i=0,j=m-1;
    while(i<n&&j>=0)
    {
        if(a[i]+b[j]<x)i++;
        else if(a[i]+b[j]>x&&j>=1)j--;
        if(a[i]+b[j]==x){
            printf("%d %d\n",i,j);
            break;
        }
    }



    return 0;
}












inline ll read(){ ll x=0,f=1; char c=getchar();
for(;!isdigit(c);c=getchar()) if(c=='-') f=-1;
for(;isdigit(c);c=getchar()) x=x*10+c-'0'; return x*f;
} 
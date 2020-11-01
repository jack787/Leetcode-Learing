#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
const int inf= 0x3f3f3f3f;
typedef long long ll;
typedef pair<int,int> PII;
inline ll read();
//#define LOCAL
int n;
int a[N];
int q;
int main() {
#ifdef LOCAL
    freopen("E:/Cpp/1.in", "r", stdin);
    freopen("E:/Cpp/1.out", "w", stdout);
#endif
    cin>>n>>q;
    for(int i=0;i<n;i++)
    cin>>a[i],a[i]+=a[i-1];
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<a[r]-a[l-1]<<endl;
    }





    return 0;
}












inline ll read(){ ll x=0,f=1; char c=getchar();
for(;!isdigit(c);c=getchar()) if(c=='-') f=-1;
for(;isdigit(c);c=getchar()) x=x*10+c-'0'; return x*f;
} 
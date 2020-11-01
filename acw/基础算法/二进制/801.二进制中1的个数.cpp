#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
const int inf= 0x3f3f3f3f;
typedef long long ll;
typedef pair<int,int> PII;
inline ll read();
//#define LOCAL
int lowbit(int x)
{
    return x&-x;
}
int a[N];
int main() {
#ifdef LOCAL
    freopen("E:/Cpp/1.in", "r", stdin);
    freopen("E:/Cpp/1.out", "w", stdout);
#endif
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        int cnt=0;
        while(a[i]){
            cnt++;
            a[i]-=lowbit(a[i]);
        }
        cout<<cnt<<" ";
    }





    return 0;
}












inline ll read(){ ll x=0,f=1; char c=getchar();
for(;!isdigit(c);c=getchar()) if(c=='-') f=-1;
for(;isdigit(c);c=getchar()) x=x*10+c-'0'; return x*f;
} 
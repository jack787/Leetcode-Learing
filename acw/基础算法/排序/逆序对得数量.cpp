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
int tmp[N];
ll merge_sort(int q[],int l,int r)
{   ll res=0;
    if(l>=r)return 0;
    int mid=l+r>>1;
    ll t1=merge_sort(q,l,mid),t2=merge_sort(q,mid+1,r);
    int cnt=0;
    int i=l,j=mid+1;
    while(i<=mid&&j<=r)
    {
        if(q[i]<=q[j])tmp[cnt++]=q[i++];
        else tmp[cnt++]=q[j++],res+=mid-i+1;
    }
    while(i<=mid)tmp[cnt++]=q[i++];
    while(j<=r)tmp[cnt++]=q[j++];
    for( i=l,j=0;i<=r;i++)
    q[i]=tmp[j++];
    return res+t1+t2;
}
int main() {
#ifdef LOCAL
    freopen("E:/Cpp/1.in", "r", stdin);
    freopen("E:/Cpp/1.out", "w", stdout);
#endif
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<merge_sort(a,0,n-1);




    return 0;
}












inline ll read(){ ll x=0,f=1; char c=getchar();
for(;!isdigit(c);c=getchar()) if(c=='-') f=-1;
for(;isdigit(c);c=getchar()) x=x*10+c-'0'; return x*f;
} 
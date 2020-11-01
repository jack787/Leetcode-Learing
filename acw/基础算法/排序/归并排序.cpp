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
void merge_sort(int q[],int l,int r)
{
    if(l>=r)return ;
    int mid=l+r>>1;
    merge_sort(q,l,mid),merge_sort(q,mid+1,r);
    int cnt=0;
    int i=l,j=mid+1;
    while(i<=mid&&j<=r)
    {
        if(q[i]<=q[j])tmp[cnt++]=q[i++];
        else tmp[cnt++]=q[j++];
    }
    while(i<=mid)tmp[cnt++]=q[i++];
    while(j<=r)tmp[cnt++]=q[j++];
    for( i=l,j=0;i<=r;i++)
    q[i]=tmp[j++];
}
int main() {
#ifdef LOCAL
    freopen("E:/Cpp/1.in", "r", stdin);
    freopen("E:/Cpp/1.out", "w", stdout);
#endif
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";




    return 0;
}












inline ll read(){ ll x=0,f=1; char c=getchar();
for(;!isdigit(c);c=getchar()) if(c=='-') f=-1;
for(;isdigit(c);c=getchar()) x=x*10+c-'0'; return x*f;
} 
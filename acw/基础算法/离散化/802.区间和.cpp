#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
const int inf= 0x3f3f3f3f;
typedef long long ll;
typedef pair<int,int> PII;
inline ll read();
//#define LOCAL
int n,m;
struct node{
    int cnt,x;
    bool operator<(const node&w)const{
        return cnt<w.cnt;
    }
};

int main() {
#ifdef LOCAL
    freopen("E:/Cpp/1.in", "r", stdin);
    freopen("E:/Cpp/1.out", "w", stdout);
#endif
    cin>>n>>m;
    vector<node>v;
    vector<int > alls;
    for(int i=0;i<n;i++){
        int x,c;
        cin>>x>>c;
        v.push_back({x,c});
        alls.push_back(x);
    }
    sort(alls.begin(),alls.end());
    auto r=unique(alls.begin(),alls.end());
    alls.end()=r;
    for(auto item:v)
    {

    }





    return 0;
}












inline ll read(){ ll x=0,f=1; char c=getchar();
for(;!isdigit(c);c=getchar()) if(c=='-') f=-1;
for(;isdigit(c);c=getchar()) x=x*10+c-'0'; return x*f;
} 
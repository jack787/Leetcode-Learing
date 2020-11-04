#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL exgcd(LL a,LL b,LL &x,LL &y)//扩展欧几里得算法 
{
    if(b==0)
    {
        x=1,y=0;
        return a;
    }
    LL ret=exgcd(b,a%b,y,x);
    y-=a/b*x;
    return ret;
}
LL getInv(int a,int mod)//求a在mod下的逆元，不存在逆元返回-1 
{
    LL x,y;
    LL d=exgcd(a,mod,x,y);
    return d==1?(x%mod+mod)%mod:-1;
}
LL qsm(LL a,int k,LL mod)
{
    LL res=1;
    while(k)
    {
        if(k&1)res=res*a%mod;
        a=a*a%mod;
        k>>=1;
    }
    return res;
}
LL qmi(LL a,LL b,LL p)
{
    LL res=1;
    while(b)
    {
        if(b&1) res=(res*a)%p;
        a=a*a%p;
        b>>=1;
    }
    return res;
}

int main()
{

    int a=17,b=3120;
    cout<<getInv(17,3120)<<endl;
    cout<<qmi(3185,2753,3120)<<endl;
    cout<<qmi(2038,2753,3120)<<endl;
    cout<<qmi(2460,2753,3120)<<endl;
    cout<<qmi(2550,2753,3120)<<endl;
    return 0;
}
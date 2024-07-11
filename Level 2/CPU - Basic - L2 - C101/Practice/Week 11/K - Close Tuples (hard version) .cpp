#include<bits/stdc++.h>
using namespace std;
#define ll long long
namespace combinatorics
{
    ll MOD;
    vector<ll> fac,inv,finv;
    ll nCr(ll x,ll y)
    {
        if(x<0||y>x||y<0)return(0);
        return(fac[x]*finv[y]%MOD*finv[x-y]%MOD);
    }
    ll nPr(ll x,ll y)
    {
        if(x<0||y>x||y<0)return 0;
        return fac[x]*finv[x-y]%MOD;
    }
    ll power(ll b,ll n)
    {
        b%=MOD;
        ll s=1;
        while(n)
        {
            if(n%2==1)s=s*b%MOD;
            b=b*b%MOD;
            n/=2;
        }
        return s;
    }
    void init(int n,ll mod)
    {
        fac.resize(n+1);
        inv.resize(n+1);
        finv.resize(n+1);
        MOD=mod;
        fac[0]=inv[0]=inv[1]=finv[0]=finv[1]=1;
        for(ll i=1;i<=n;++i)fac[i]=fac[i-1]*i%MOD;
        for(ll i=2;i<=n;++i)inv[i]=MOD-MOD/i*inv[MOD%i]%MOD;
        for(ll i=2;i<=n;++i)finv[i]=finv[i-1]*inv[i]%MOD;
    }
    ll mul(ll a,ll b)
    {
        return ((a%MOD)*(b%MOD))%MOD;
    }
    ll add(ll a,ll b)
    {
        return ((a%MOD)+(b%MOD))%MOD;
    }
    ll sub(ll a,ll b)
    {
        return (((a-b)%MOD)+MOD)%MOD;
    }
    ll divide(ll a,ll b)
    {
       return mul(a,power(b,MOD-2));
    }
    ll Inv(int x)
    {
        return power(x,MOD-2);
    }
    ll catalan(int n)
    {
        return (nCr(2*n,n)*Inv(n+1))%MOD;
    }
    ll StarsAndPars(ll n,ll k)
    {
        return nCr(n+k-1,k-1);
    }
};
using namespace combinatorics;
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    init(1e6,1e9+7);
    int t;cin>>t;while(t--)
    {
        int n,m,k;cin>>n>>m>>k;
        int s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        sort(s,s+n);
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            int l=0,r=i,cnt=i;
            while(l<=r)
            {
                int mid=l+r>>1;
                int Nidx=i-mid;
                if(s[i]-s[Nidx]<=k)
                {
                    cnt=Nidx;
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
            ans=add(ans,nCr(i-cnt,m-1));
        }
        cout<<ans<<'\n';
    }
    return 0;
}

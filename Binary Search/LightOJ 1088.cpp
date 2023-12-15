#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    scanf("%lld",&t);
    ll cs=1;
    while(t--){
    ll n,q;
    scanf("%lld %lld",&n,&q);
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        ll x;
        scanf("%lld",&x);
        v.push_back(x);
    }
    printf("Case %d: \n",cs);

    while(q--)
    {
        ll a,b;
        scanf("%lld %lld",&a,&b);
        ll c=lower_bound(v.begin(),v.end(),a)-v.begin();
        ll d=upper_bound(v.begin(),v.end(),b)-v.begin();
        ll ans=d-c;
        printf("%lld\n",ans);
    }
    cs++;
    }
}

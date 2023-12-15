#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
void solve()
{
    long long n;
    cin>>n;
    long long ar[n+1];
    for(long long i=0;i<n;i++)
        cin>>ar[i];
    sort(ar,ar+n);
    long long ans=0;
    for(long long i=0;i<n;i++)
    {
        for(long long j=i+1;j<n;j++)
        {
            long long sum=ar[i]+ar[j];
            long long p=upper_bound(ar,ar+n,sum)-ar;
            p--;
           if(sum==ar[p])
            p--;
           if(sum>ar[p])
            ans+=(p-j);

           //cout<<ar[i]<<" "<<ar[j]<<" "<<p<<" "<<ans<<endl;
        }
    }
    cout<<ans<<endl;

}
int main()
{
    IOS;
        //solve();
        int t;
        cin >> t;
        int c = 1;
        while ( t-- )
        {
            cout<<"Case "<<c++<<": ";
            solve();
        }
        return 0;
}




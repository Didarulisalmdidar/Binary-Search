
#include<bits/stdc++.h>
using namespace std;
long long trail_zero(long long n)
{
    long long ans=0;
    for(long long i=5;i<=n;i*=5)
        ans+=(n/i);
       // cout<<n<<" "<<ans<<endl;
    return ans;

}
int main()
{
    long long t;
    cin>>t;
    long long cs=1;
    while(t--)
    {
        long long n;
        cin>>n;
        cout<<"Case "<<cs<<": ";
        long long L=0,R=1000000000000000000;
        while(L<R)
        {
            long long mid=L+(R-L)/2;
            if(trail_zero(mid)<n)
                L=mid+1;
            else
                R=mid;
                //cout<<mid<<" "<<trail_zero(mid)<<" "<<L<<" "<<R<<endl;
        }
        long long cnt=0;
        for(long long i=5;i<=L;i*=5)
            cnt+=(L/i);
        if(cnt==n)
            cout<<L<<endl;
        else
            cout<<"impossible"<<endl;
            cs++;

    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,k;
    cin>>n>>m>>k;
    long long left=1,right=n*m*1LL;
    while(left<right)
    {
        long long mid=left+(right-left)/2;
        long long ans=0;
        for(long long i=1;i<=n;i++)
        {
            ans+=min(mid/i , m);
        }
        //cout<<mid<<" "<<ans<<endl;
        if(ans<k)
            left=mid+1;
        else
            right=mid;
            //cout<<left<<" "<<right<<endl;
    }
    cout<<left<<endl;
    //main();
}


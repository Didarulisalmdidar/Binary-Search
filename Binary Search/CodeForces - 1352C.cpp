#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        scanf("%lld %lld",&n,&k);
        long long L=1,R=INT_MAX;
        while(L<R)
        {
            long long mid=L+(R-L)/2;
            long long div=mid/n;
            long long baki=mid-div;

            if(baki<k)
                L=mid+1;
            else
                R=mid;
                //cout<<"L "<<L<<" "<<"R "<<R<<endl;

        }
   printf("%llld\n",L);
    }
}



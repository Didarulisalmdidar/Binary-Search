#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long p=(n*(n-1))/2;
        long long q=p-(n-1);
        //cout<<p<<" "<<q<<endl;
        if(k>q)
        {
            long long r=k-q;
            long long s=n-r+1;
            for(long long i=1;i<=n;i++)
            {
                if(i==1 || i==s)
                    cout<<"b";
                else
                    cout<<"a";
            }
            cout<<endl;

        }
        else
        {
            long long ans=0;
            long long a=0;
            for(long long i=1;i<=n-2;i++)
            {
                ans+=i;
                if(k<=ans)
                {
                     a=i;
                    break;
                }
            }
            long long c=n-a;
            long long d=(a*(a-1))/2;
            long long e=k-d;
            long long f=n-e+1;
           // cout<<c<<" "<<d<<" "<<e<<" "<<f<<endl;
            for(long long i=1;i<=n;i++)
            {
                if(i==c || i==f)
                    cout<<"b";
                else
                    cout<<"a";
            }
            cout<<endl;


        }
    }
}


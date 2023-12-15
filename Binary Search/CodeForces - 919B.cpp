#include<bits/stdc++.h>
using namespace std;
int sum_of_digit(long long n)
{
    long long sum=0;
    while(n)
    {
        long long p=n%10;
        n/=10;
        sum+=p;
    }
    return sum;
}
int main()
{
    long long k;
    cin>>k;
    long long cnt=0;
    for(long long i=19;i<=100000005;i+=9)
    {
        if(sum_of_digit(i)==10)
            cnt++;
        if(cnt==k)
        {
            cout<<i<<endl;
            break;
        }
    }
    //main();
}



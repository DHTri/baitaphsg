#include <bits/stdc++.h>
using namespace std;
int daoso(int n)
{
    long long sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
        sum*=10;
    }
    return sum/10;
}
int main()
{
    long long n;
    cin>>n;
    long long sum=n+daoso(n);
    long long sum2=sum+daoso(sum);
    cout<<sum2;
}

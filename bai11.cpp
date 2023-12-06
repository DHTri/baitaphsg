#include <bits/stdc++.h>
using namespace std;
int so1(int n)
{
    long long sum=0;
    for(int i =1;i<=n/2;i++)
    {
        if(n%i==0) sum+=i;
    }
    return sum;
}
int so2(int m)
{
    long long sum2=0;
    for(int i =1;i<=m/2;i++)
    {
        if(m%i==0) sum2+=i;
    }
    return sum2;
}
int main()
{
    long long n,m;
    cin>>n>>m;
    if(so1(n)==m && so2(m)==n) cout<<"day la 2 so ban be";
    else cout<<"khong phai 2 so ban be";
}

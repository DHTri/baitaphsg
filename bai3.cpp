#include <bits/stdc++.h>
using namespace std;
int kiemtra(int a)
{
    for(int i =2;i<=sqrt(a);i++)
    {
        if(a%i==0) return 0;
    }
    return a>1;
}
int tongso(int a)
{
    long long sum=0;
    while(a>0)
    {
        sum+=a%10;
        a/=10;
    }
    return sum;
}
int main()
{
   int n;
   cin>>n;
   if(kiemtra(tongso(n))) cout<<"yes";
   else cout<<"no";
}

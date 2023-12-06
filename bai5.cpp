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
int demuoc(int a)
{
    int sum=0;
    for(int i =1;i<=a;i++)
    {
        if(a%i==0) sum++;
    }
    return sum;
}
int main()
{
   long long n;
   cin>>n;
   if(kiemtra(demuoc(n))) cout<<"yes";
   else cout<<"no";
   
}

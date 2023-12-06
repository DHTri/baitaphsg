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

int main()
{
   long long n;
   cin>>n;
   long long sum=0;
   if(n<0) return 0;
   else
   {
   for(int i= 1;i<=n;i++)
   {
     if(kiemtra(i)) sum+=i;
   }
   cout<<sum;
   }
}

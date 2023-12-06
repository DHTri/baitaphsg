#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long tu = a*d+b*c;
    long long mau = b*d;
    long long uoc_chung = __gcd(tu,mau);
    cout<<tu/uoc_chung<<"/"<<mau/uoc_chung;
}

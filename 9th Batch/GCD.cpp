#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    if(b==0) return a;
    return GCD(b,a%b);
}

int main()
{
    cout<<GCD(120,20)<<endl;
    cout<<__gcd(120,20);
    int a =
}

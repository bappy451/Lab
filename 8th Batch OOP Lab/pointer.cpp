#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    cout<<a<<endl;
    cout<<&a<<endl;

    int* ptr;
    ptr = &a;
    cout<<ptr<<endl;

    cout<<*ptr<<endl;

    cout<<&ptr<<endl;

    int** p2p;
    p2p = &ptr;
    cout<<"p2p = "<<p2p<<", &ptr = "<<&ptr<<" , ptr = "<<ptr<<" , *ptr = "<<*ptr<<", &a = "<<&a<<endl;
    cout<<"p2p = "<<p2p<<", *p2p = "<<*p2p<<" , **ptr = "<<**p2p<<endl;

    return 0;
}

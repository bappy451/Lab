#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a = 10;
    int* ptr = &a;
    cout<<"value of a:"<<a<<endl;
    cout<<"address of a: "<<&a<<"\t address using pointer: "<<ptr<<endl;
    cout<<"value of a using pointer de-referencing: "<<*ptr<<endl;

    ///Pointer to Pointer
    int** p2p = &ptr;
    cout<<"value of p2p: "<<p2p<<"\t address of ptr: "<<&ptr<<"\t using de-referencing: "<<*p2p<<endl;
    cout<<"value of 'a' through p2p: "<<**p2p;


    return 0;
}

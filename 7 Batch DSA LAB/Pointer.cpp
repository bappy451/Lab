#include<bits/stdc++.h>
using namespace std;


int main()
{
    double aa = 17;
    long long arr[] = {1,2,3,4,5,6,7,8,9};
    int S = sizeof(arr)/sizeof(arr[0]);
    cout<<S<<endl;
    cout<<sizeof(long long)<<endl;


    int a = 10;
    int* ptr = &a;
    cout<<"value of a:"<<a<<endl;
    cout<<"address of a: "<<&a<<"\t address using pointer: "<<ptr<<endl;
    cout<<"value of a using pointer de-referencing: "<<*ptr<<endl;

    int **ptr1 = &ptr;
    cout<<"address of ptr: "<<&ptr<<"\t address using pointer ptr1: "<<ptr1<<"\tvalue using de-referencing: "<<*ptr1<<endl;

    return 0;
}

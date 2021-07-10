#include<bits/stdc++.h>
using namespace std;

void inc(int a)
{
    a = a + 7;
    cout<<"inc. a = "<<a<<endl;
}

int inc1(int a)
{
    a = a + 7;
    cout<<"inc. a = "<<a<<endl;
    return a;
}

void inc_ref(int *a)
{
    *a = *a + 10;
}

int main()
{
    int a = 10;
    cout<<"1. a = "<<a<<endl;

    inc(a);

    //a = inc1(a);
    cout<<"2. a = "<<a<<endl;

    inc_ref(&a);
    cout<<"3. a = "<<a<<endl;



    char str[] = {'b','a','n','g','l','a'};

    int arr[] ={1,2,3,4,5,6};

    int *myptr = arr;

    cout<<"Address of str = "<<myptr<<endl;
    cout<<"Value of arr = "<<arr;

    return 0;
}

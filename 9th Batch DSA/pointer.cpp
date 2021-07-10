#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[] = {1,2,3,4,5,6};
    int *p = arr;
    ///int *p = &arr[0]
    cout<<*p<<endl;
    ++p;
    cout<<*p<<endl;
    ++p;
    cout<<*p<<endl;


/*
    cout<<sizeof(char)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(arr)<<endl;
    cout<<arr[0]<<endl;
    cout<<"P  : "<<p+1<<endl;
    cout<<"arr: "<<arr<<endl;
    char ch[] = "BAUET";
    for(int i=0; i<6; i++)
        printf("%d\t",&ch[i]);
    cout<<endl;

    for(int i=0; i<6; i++)
        cout<<&arr[i]<<"\t";
    cout<<endl;
    for(int i=0; i<6; i++)
        cout<<p+i<<"\t";
    cout<<endl;


    for(int i=0; i<6; i++)
        cout<<arr[i]<<"\t";
    cout<<endl;

    for(int i=0; i<6; i++)
        cout<<p[i]<<"\t";
    cout<<endl;

    for(int i=0; i<6; i++)
        cout<<*(p+i)<<"\t";
    cout<<endl;

    for(int i=0; i<6; i++)
        cout<<*(arr+i)<<"\t";
    cout<<endl;*/
    return 0;
}

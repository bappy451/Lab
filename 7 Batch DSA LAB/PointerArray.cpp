#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[5] = {1,2,3,4,5};
    int* ptr = arr;

    for(int i=0; i<5; i++)
        cout<<arr[i]<<"\t";
    cout<<endl;

    for(int i=0; i<5; i++)
        cout<<*(ptr+i)<<"\t";
    cout<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int index(int arr[],int si, int key)
{
    for(int i=0; i<si; i++)
        if(arr[i] == key) return i;
    return si;
}

int main()
{
    int arr[] = {5,3,9,8,6,1,2,7};
    int si = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<si; i++)
        ///printf("%d\t",arr[i]);
        cout<<arr[i]<<"\t";

    cout<<endl;

    int key = 9;
    printf("item found at position %d",index(arr,si,key));


    return 0;
}

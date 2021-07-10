#include<bits/stdc++.h>
using namespace std;

void arryPrint(int arr[], int si)
{
    ///Print all element of the array
    for(int i=0; i<si; i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
}

int main()
{
    int arr[] = {1,2,3,4,100,5,6,7,8,10}; ///-> {2,3,4,100,5,6,7,8,10,1}
    int si = sizeof(arr)/sizeof(arr[0]);

    arryPrint(arr,si);


    ///Print the largest element of the array???
    int _max = -99999;
    for(int i=0; i<si; i++)
        if(arr[i]>_max)
            _max = arr[i];
    cout<<"Maximum number of the array is: "<<_max<<endl;

    ///Array search...
    int key = 100;
    for(int i=0; i<si; i++)
        if(arr[i] == key)
            cout<<"position of key is :"<< i<<endl;

    ///Array rotation...
    int temp = arr[0];
    for(int i=0; i<si-1; i++)
        arr[i] = arr[i+1];
    arr[si-1] = temp;

    arryPrint(arr,si);


///Home Work...
/**
    int arr[] = {1,2,3,4,100,5,6,7,8,10}; ///-> {2,3,4,100,5,6,7,8,10,1}
    int si = sizeof(arr)/sizeof(arr[0]);
    arryPrint();
    largestElement();
    searchArray();
    arrayRotation();

    */




    return 0;
}

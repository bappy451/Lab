#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[] = {1,2,3,4,100,5,6,7,8,10}; ///-> {2,3,4,100,5,6,7,8,10,1}
    int si = sizeof(arr)/sizeof(arr[0]);

    ///Print all element of the array
    for(int i=0; i<si; i++)
        cout<<arr[i]<<"\t";
    cout<<endl;

    ///Print the largest element of the array???
    int _max = -99999;
    for(int i=0; i<si; i++)
        if(arr[i]>_max)
            _max = arr[i];

    ///Array search...
    int key = 100;
    for(int i=0; i<si; i++)
        if(arr[i] == key)
            cout<<"position of key is :"<< i<<endl;

    cout<<"Maximum number of the array is: "<<_max<<endl;

    ///Print the second largest element of the array...
    sort(arr,arr+si);
    cout<<"the second largest element of the array is: "<<arr[si-2]<<endl;


    ///Array rotation...
    int temp = arr[0];
    for(int i=0; i<si-1; i++)
        arr[i] = arr[i+1];
    arr[si-1] = temp;

    for(int i=0; i<si; i++)
        cout<<arr[i]<<"\t";
    cout<<endl;


///Home Work...
/**
    int arr[] = {1,2,3,4,100,5,6,7,8,10}; ///-> {2,3,4,100,5,6,7,8,10,1}
    int si = sizeof(arr)/sizeof(arr[0]);
    arryPrint();
    largestElement();
    searchArray();
    secondLargestElement();
    arrayRotation();

    */




    return 0;
}

// C++ program for implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;













/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << "\t";
    cout << endl;
}

// Driver code
int main()
{
    int arr[] = {64, 70, 25, 12, 22, 90, 11, 35};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);


    for(int j=0; j<n-1; j++)
        for(int i=0; i<n-1; i++)
            if(arr[i]<arr[i+1])
                swap(arr[i],arr[i+1]);

    printArray(arr,n);


    return 0;
}

#include<bits/stdc++.h>
using namespace std;

void print_arr(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
}

void arr_rotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i=n-1; i>=0; i--)
        arr[i] = arr[i-1];
    arr[0] = temp;
}

///Array rotate by given number.
void arr_rotate_by_n(int arr[], int _size, int rot)
{
    for(int i=0; i<rot; i++)
        arr_rotate(arr, _size);
}

void arr_sub_rotate(int arr[], int _size, int low, int hi)
{
    ///int dif = hi - low;
    int temp = arr[hi];
    for(int i=hi; i>=low; i--)
        arr[i] = arr[i-1];

    arr[low] = temp;

}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    print_arr(arr, 10);

    //arr_rotate(arr,10);
    //print_arr(arr,10);

    //arr_rotate_by_n(arr,10,5);
    //print_arr(arr,10);

    arr_sub_rotate(arr,10,5,9);
    print_arr(arr,10);

    return 0;
}

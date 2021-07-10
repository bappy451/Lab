#include<bits/stdc++.h>
using namespace std;

#define MAX 100
int arr[MAX];

void addData(int arr[], int data)
{
    int i=1;
    while(i<MAX)
    {
        if(arr[i]==0){
            arr[i]=data;
            return;
        }
        else if(data < arr[i]){
            i = 2*i;
        }
        else if(data >= arr[i]) i = 2*i+1;
    }
}

void print(int arr[],int si)
{
    for(int i=1; i<=si; i++)
        cout<<arr[i]<<", ";
    cout<<endl;
}


int main()
{
    addData(arr,50);
    addData(arr,60);
    addData(arr,40);
    print(arr,3);
    return 0;
}

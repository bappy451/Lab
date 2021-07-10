#include<bits/stdc++.h>
using namespace std;


int main()
{
    double d,s;
    s = clock();
    for(int i=0; i<10000;)
        i++;
    d = clock()-s/(double) CLOCKS_PER_SEC;
    cout<<"Duration is: "<<d<<endl;
    return 0;
}

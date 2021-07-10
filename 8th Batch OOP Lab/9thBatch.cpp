#include<bits/stdc++.h>
using namespace std;


int main()
{
    char arr[3][3];
    ///cout<<sizeof(char)<<endl;
    for(int i=0; i<3; i++)
        printf("%d\n",&arr[0][i]);

    cout<<endl<<endl;
    for(int i=0; i<3; i++)
        printf("%d\n",&arr[1][i]);

    cout<<endl<<endl;
    for(int i=0; i<3; i++)
        printf("%d\n",&arr[2][i]);

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

/// template<class T>
template<typename T>
T find_max(T a, T b)
{
    if(a>b)
        return a;
    return b;
}

template<class T1,class T2>
T1 sum(T1 t1, T2 t2)
{
    T1 t = t1 + t2;
    return t;
}

template<typename ... SomeArgs>
void Hello(SomeArgs ... args)
{
    int sz = sizeof ... (args);
    cout<<"Size of Args: "<<sz<<"\t";
    cout<<__PRETTY_FUNCTION__<<endl;
}

int main()
{
    cout<<"Hello"<<endl;
    cout<<find_max<double>(2.2,5.7)<<endl;
    cout<<find_max<float>(2.2,5.7)<<endl;
    cout<<find_max(2,5)<<endl;
    cout<<find_max<char>('o','c')<<endl;
    cout<<find_max<string>(string("BAUET"),string("bauet"))<<endl;
    cout<<find_max<string>("BAUET","bauet")<<endl;

    cout<<sum<double,double>(1,2.2)<<endl;

    Hello(1,2,3,4,5,6);

    int a{24};
    int c(10);
    int b = 40;
    cout<<a<<"\t"<<b<<"\t"<<c<<endl;

    return 0;
}

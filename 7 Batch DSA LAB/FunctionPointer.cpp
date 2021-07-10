#include <stdio.h>

void my_int_func(int x, int y)
{
    printf( "%d\n", x+y );
}

void pointerFunction(void (*func)(int,int),int a, int b)
{
    func(a,b);
}

int main()
{
    void (*foo)(int,int);
    foo = &my_int_func;


    ///* call my_int_func (note that you do not need to write (*foo)(2) ) */
    foo( 2,5 );

    ///* but if you want to, you may */
    ///(*foo)( 7,7 );

    pointerFunction(foo,1001,9);

    return 0;
}

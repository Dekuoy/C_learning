#include <stdio.h>

int max(int x, int y)
{
    return x ? y : x, y;
}

//函数指针
int (*p)(int x,int y);

int main()
{
    p = &max;

    int x,y,z;
    x = 1;
    y = 2;
    z = 3;

    printf("%d\n",p(x,p(y,z)));

    return 0;
}
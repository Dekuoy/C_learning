#include <stdio.h>

int main()
{
    char *str = "hello,world";
    fputs(str , stdout);//不会自动换行，但可以输出到任意流

    printf("\n");
    return 0;
}
#include <stdio.h>
//字符输入输出

int main()
{
    int a;

    printf("请输入一个字符串：\n");

    a = getchar();

    printf("你输入的第一个字符为：");
    putchar(a);
    printf("\n");

    return 0;
}
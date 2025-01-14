#include <stdio.h>
//字符输入输出
int main()
{

    printf("请输入一个字符串：\n");

    
    for (int i = 0; i < 3; i++)
    {
        int a;

        a = getchar();
        putchar(a);

    }

    printf("\n");
}
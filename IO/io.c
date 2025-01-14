#include <stdio.h>

void add2(int, int);

int main()
{
    printf("请输入两个正整数，我会告诉你他们的和是多少：\n");

    int a;
    int b;

    scanf("%d\n%d", &a, &b);
    add2(a, b);

    return 0;
}

void add2(int a, int b)
{
    int c = a + b;
    printf("这两个数的和为：%d\n", c);
}
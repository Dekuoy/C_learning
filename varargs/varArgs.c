#include <stdio.h>
#include <stdarg.h>

// c当中的可变参数

int getSum(int x, ...)
{ // x表示参数的个数，后面填上对应的个数的参数
    // 函数内部使用 va_list 类型的变量 va_list 来访问可变参数列表
    va_list list;
    int sum = 0;
    // 使用stdarg.h中定义的va_start函数获取可变参数列表中的第一个参数
    va_start(list, x);
    for (int i = 0; i < x; i++)
    {
        sum = sum + va_arg(list, int);
    }
    va_end(list);
    return sum;
}

int main()
{
    printf("1-5的和为：%d\n", getSum(5,  1, 2, 3, 4, 5));

    return 0;
}
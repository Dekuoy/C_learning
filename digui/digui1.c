#include <stdio.h>

// 递归
// 函数调用本身

// 递归需要出口，不然会导致栈溢出

// 用递归求给定整数的阶乘

int jiechen(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else if (x < 1)
    {
        return 0;
    }
    else
    {
        return x * jiechen(x - 1);
    }
}


int main(){
    printf("5的阶乘是：%d" , jiechen(5));
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// 定义回调函数
int getNextRandomValue()
{
    return rand();
}

// 定义函数调用回调函数
void populate_array(int *array, size_t arraysize, int (*getNextValue)())
{
    for (int i = 0; i < arraysize; i++)
    {
        array[i] = getNextValue();
    }
}

int main()
{
    int myArray[10];
    populate_array(myArray , 10 , getNextRandomValue);

    for (int i = 0; i < 10; i++)
    {
        printf("%d  ",myArray[i]);
    }
    printf("\n");

    return 0;
    
}
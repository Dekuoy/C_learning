#include <stdio.h>

struct vector
{
    int x;
    int y;
} vector2 ={3,4};

struct vector vector1;

int main()
{
    vector1.x = 1;
    vector1.y = 2;

    printf("vector1:(%d,%d)\n",vector1.x,vector1.y);
    printf("vector2:(%d,%d)\n",vector2.x,vector2.y);


    return 0;
}

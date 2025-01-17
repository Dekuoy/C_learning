#include <stdio.h>

#ifndef MAX
    #define MAX(a, b) ((a) > (b) ? (a) : (b))
#endif

int main()
{
    printf("20和10里最大的数是%d\n", MAX(20, 10));

    return 0;
}
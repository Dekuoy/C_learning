#include <stdio.h>
#include <string.h>

union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    union Data data1;
    // 与结构体不同，其大小为其成员中最大成员的大小
    printf("共用体Data的大小为：%zu\n", sizeof(data1));

    printf("-------------------------------\n");
    // 共用体在同一时间最好只调用一个变量，否则会导致数据错误

    data1.i = 10;
    data1.f = 220.5;
    strcpy(data1.str, "hello,world");

    printf("data1.i:%d\n", data1.i);
    printf("data1.i:%f\n", data1.f);
    printf("data1.i:%s\n", data1.str);

    /*data1.i:1819043176
    data1.i:1143141483620823940762435584.000000
    data1.i:hello,world

    我们可以看到共用体的 i 和 f 成员的值有损坏，
    因为最后赋给变量的值占用了内存位置，
    这也是 str 成员能够完好输出的原因

    */

   

    printf("-------------------------------\n");

    data1.i = 10;
    printf("data1.i:%d\n", data1.i);

    data1.f = 220.5;
    printf("data1.i:%f\n", data1.f);

    strcpy(data1.str, "hello,world");
    printf("data1.i:%s\n", data1.str);

    /*data1.i:10
    data1.i:220.500000
    data1.i:hello,world
    */

    return 0;
}
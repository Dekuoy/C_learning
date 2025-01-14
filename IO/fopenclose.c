#include <stdio.h>

//fopen，两个参数，第一个表示文件名，第二个表示模式，"w"只写，"r"只读，"a"追加
int main()
{
    FILE *file;

    file = fopen("hello.txt" ,"w");

    if(file != NULL)
    {
        fprintf(file , "hello,world!\n");//写入文件

        fclose(file);
    }

    char *buffer;
    
    file = fopen("hello.txt" , "r");
    if(file != NULL)
    {
        fscanf(file , "%s" ,buffer);
        printf("从文件中读取到的字符串：%s\n" , buffer);
        fclose(file);
    }

    file = fopen("hello.txt" ,"a");

    if(file != NULL)
    {
        fprintf(file , "this's C Programming!\n");//写入文件

        fclose(file);
    }

    return 0;
}
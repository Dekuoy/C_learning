#include <stdio.h>

int main()
{
    char str[7];
    //char *fgets(char *__restrict__ __s, int __n, FILE *__restrict__ __stream),int__n中包括空字符\0
    printf("请输入一个字符串：\n");
    fgets(str , sizeof(str) , stdin);

    printf("你输入的字符串为：\n%s" , str);


    for(int i= 0;i < sizeof(str);i++)
    {
        printf("%c\n" , str[i]);
    }
    return 0;

}
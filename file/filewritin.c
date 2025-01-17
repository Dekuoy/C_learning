#include <stdio.h>

int main()
{
    FILE *fp = NULL;

    fp = fopen("/tmp/test.txt","w+");

    char str[10];
    scanf("%s" ,str);

    fprintf(fp , "%s" ,str);

    fclose(fp);

    return 0;
}
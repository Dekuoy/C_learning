#include <stdio.h>

int main()
{
    FILE *fp = NULL;

    char buff[255];

    fp = fopen("/tmp/test.txt", "r");

    fscanf(fp, "%s", buff);

    //fscanf督导空格或换行符就会停止
    printf("%s\n", buff);

    fscanf(fp, "%s", buff);
    printf("%s\n", buff);

    return 0;
}
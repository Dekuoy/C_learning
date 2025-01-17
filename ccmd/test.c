#include <stdio.h>

int main(int argc , char *argv[]){
    //main函数其实有两个参数，int argc ,和char *argv[]
    //argc表示传入的命令行参数的个数，包括程序名本身，
    //argv表示指向字符串数组的指针，其中的每个字符串都是一个命令行参数
    if(argc == 2){
        printf("the argument supplied is %s\n" , argv[1]);
    }else if (argc > 2)
    {
        printf("the arguments supplied are ");
        for(int i = 1;i < sizeof(*argv)/sizeof(char);i++){
            printf("%s " , argv[i]);
        }
        printf("\n");
    }else{
        printf("One argument expected.\n");
    }

    return 0;
    

}
#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void printBooks(struct Books *book)
{
    printf("title:%s\n",book->title);
    printf("author:%s\n",book->author);
    printf("subject:%s\n",book->subject);
    printf("book_id:%d\n",book->book_id);

}

int main()
{

    struct Books book1;
    strcpy(book1.title,"C Programming");
    strcpy(book1.author,"CaiNiao");
    strcpy(book1.subject,"C Programming Tutorial");
    book1.book_id = 123456;

    printBooks(&book1);

    printf("----------------------------------\n");

    struct Books book2;

    printf("结构体Books的大小为：%zu字节\n" , sizeof(book2));//50+50+100+4=204

    return 0;



}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct 
{
    unsigned char a;
    unsigned char b;
    unsigned char c;   
}test1;

test1 a;

typedef union 
{   struct data
    {
        char a1;
        char a2;
        char a3;
    }data;

    char buf[3];
}union_test;//丟進去buf的資料會依順序，丟至a1、a2、a3

union_test test;

int main(void)
{   a.a='4';
    char b[3]={'1','2','3'};
    
    printf("%c\n",a.a);

    //把b複製到buff//
    memcpy(test.buf,b,sizeof(test.buf));
    //union的第一個剛好等於,buf 複製過去的第一個//
    printf("%c\n",test.data.a1);
    system("pause");
    return 0;
}
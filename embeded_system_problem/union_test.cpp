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
}union_test;//��i�hbuf����Ʒ|�̶��ǡA���a1�Ba2�Ba3

union_test test;

int main(void)
{   a.a='4';
    char b[3]={'1','2','3'};
    
    printf("%c\n",a.a);

    //��b�ƻs��buff//
    memcpy(test.buf,b,sizeof(test.buf));
    //union���Ĥ@�ӭ�n����,buf �ƻs�L�h���Ĥ@��//
    printf("%c\n",test.data.a1);
    system("pause");
    return 0;
}
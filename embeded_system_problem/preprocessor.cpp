#include <stdio.h>
#include <stdlib.h>
#define seconds_peryear (1UL*60*60*24*365)
//60*60*24*365�|��16bit����F��overflow,�ҥH�����ϥ�long�h�x�s(long=4byte=32bit)

#define MIN(A,B) ((A) <=(B)?(A):(B))


int main(void)
{   int least=MIN(4,6);
    int a[5]={1,2,3,4,5};
    int *ptr;
    ptr=a;


    // //�ŧi�m��//
    // int b;//int
    // int *c;//pointer
    // int **d;//���Ъ�����
    // int e[10];//�}�C
    // int *f[10];//���а}�C(�����s���Ъ�)
    // int (*h)[10];//����,���V�@�Ӧ�10��int��array
    // int (*i)(int);//function ������,��Ƥ����@��int�ܼ�,�åB�^��int
    // int (*k[10])(int);//���а}�C�̭������Ы��V���,�åB�̭����@�Ӿ�μ�,�ê�^��μ�







    printf("%ld\n",seconds_peryear);
    printf("%d\n", least);
    printf("%d\n",MIN(a[2],*ptr++));
    system("pause");
    return 0;
}
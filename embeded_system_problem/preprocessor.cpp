#include <stdio.h>
#include <stdlib.h>
#define seconds_peryear (1UL*60*60*24*365)
//60*60*24*365會使16bit的表達式overflow,所以必須使用long去儲存(long=4byte=32bit)

#define MIN(A,B) ((A) <=(B)?(A):(B))


int main(void)
{   int least=MIN(4,6);
    int a[5]={1,2,3,4,5};
    int *ptr;
    ptr=a;


    // //宣告練習//
    // int b;//int
    // int *c;//pointer
    // int **d;//指標的指標
    // int e[10];//陣列
    // int *f[10];//指標陣列(全部存指標的)
    // int (*h)[10];//指標,指向一個有10個int的array
    // int (*i)(int);//function 的指標,函數內有一個int變數,並且回傳int
    // int (*k[10])(int);//指標陣列裡面的指標指向函數,並且裡面有一個整形數,並返回整形數







    printf("%ld\n",seconds_peryear);
    printf("%d\n", least);
    printf("%d\n",MIN(a[2],*ptr++));
    system("pause");
    return 0;
}
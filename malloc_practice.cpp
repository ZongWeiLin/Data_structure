#include<stdio.h>
#include<stdlib.h>
// int main (){
//     int *p =(int*)malloc(sizeof(int));
//     *p=10;
//     printf("%d\n",*p);
//     free(p);

//     system("pause");
//     return 0;
// }
int main(){
    int *p= (int*) malloc(100);

    printf("位置:%p\n",p);
    printf("數值:%d\n",*p);

    *p=100;

    printf("位置:%p\n",p);
    printf("數值:%d\n",*p);
    
    free(p);
    system("pause");
    return 0;

}
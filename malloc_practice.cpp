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

    printf("��m:%p\n",p);
    printf("�ƭ�:%d\n",*p);

    *p=100;

    printf("��m:%p\n",p);
    printf("�ƭ�:%d\n",*p);
    
    free(p);
    system("pause");
    return 0;

}
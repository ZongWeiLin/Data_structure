#include <stdio.h>
#include <stdlib.h>


int square (volatile int *ptr){
    return *ptr**ptr;
}


int main(void)
{   volatile int value;
    value=4;
    printf("%d\n",square(&value));
    value=5;
    value=6;
    system("pause");
    return 0;
}
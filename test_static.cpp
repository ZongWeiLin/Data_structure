#include <stdio.h>
#include <stdlib.h>
#include "a.c"


int main(void)
{   
    extern char a;
    printf("%c\n",a);
    msg();
    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define BIT3 (0x1<<3)
#define SET_BIT(x,n) ((x)|=(0x1<<n))
//看是要第幾個位元設成1，就把0x1shift多少格再取or,ex:第二個位元設成1,x|=0x100
#define clear_bit(x,n) ((x)&=~(0x1<<n))
//先將其他沒有要改變的bit用not取mask,再透過and的把要clear的bit設成0
//ex:第二個bit,x&=~(0x100)->x&=0x011



static int a = 0b10100;
 
void set_bit3(void){
    a|= BIT3;
}

void clear_bit3(void){
    a&=~ BIT3;//取反是為了做遮罩
}


int main(void)
{   
    printf("before set bit:%d\n",a);
    SET_BIT(a,3);
    printf("after set bit:%d\n",a);
    clear_bit(a,3);
    printf("after clear bit:%d\n",a);  


    //test shift//
    //   <<,>>分別為向左補0以及向右補0//
    unsigned int b = 0b10000;//16
    int c=-4;
    printf("b before shift:%d\n",b);
    b=b>>1;//向右移動一位元,b=8
    printf("b after shift:%d\n",b);
    b=b<<4;//向左移動3位元,b=8*2^3=64
    printf("b after shift:%d\n",b); 

     printf("c before shift:%d\n",c);
    c=c>>1;//向右移動一位元
    printf("c after shift:%d\n",c);
    c=c<<4;//向左移動3位元
    printf("c after shift:%d\n",c); 

    //bit logic operator//
    unsigned int i=0b1001,j=0b0101;
    //and//
    unsigned int temp=i;
    printf("i and j:%d\n",temp&=j);
    //or//
    temp=i;
    printf("i or j:%d\n",temp|=j);
    //xor//
    temp=i;
    printf("i xor j:%d\n",temp^=j);
    //not//
    temp=i;
    printf("i not:%d\n",temp=~i);



    system("pause");
    return 0;
}
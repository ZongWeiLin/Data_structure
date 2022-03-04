#include <stdio.h>
#include <stdlib.h>
#define BIT3 (0x1<<3)
#define SET_BIT(x,n) ((x)|=(0x1<<n))
//�ݬO�n�ĴX�Ӧ줸�]��1�A�N��0x1shift�h�֮�A��or,ex:�ĤG�Ӧ줸�]��1,x|=0x100
#define clear_bit(x,n) ((x)&=~(0x1<<n))
//���N��L�S���n���ܪ�bit��not��mask,�A�z�Land����nclear��bit�]��0
//ex:�ĤG��bit,x&=~(0x100)->x&=0x011



static int a = 0b10100;
 
void set_bit3(void){
    a|= BIT3;
}

void clear_bit3(void){
    a&=~ BIT3;//���ϬO���F���B�n
}


int main(void)
{   
    printf("before set bit:%d\n",a);
    SET_BIT(a,3);
    printf("after set bit:%d\n",a);
    clear_bit(a,3);
    printf("after clear bit:%d\n",a);  


    //test shift//
    //   <<,>>���O���V����0�H�ΦV�k��0//
    unsigned int b = 0b10000;//16
    int c=-4;
    printf("b before shift:%d\n",b);
    b=b>>1;//�V�k���ʤ@�줸,b=8
    printf("b after shift:%d\n",b);
    b=b<<4;//�V������3�줸,b=8*2^3=64
    printf("b after shift:%d\n",b); 

     printf("c before shift:%d\n",c);
    c=c>>1;//�V�k���ʤ@�줸
    printf("c after shift:%d\n",c);
    c=c<<4;//�V������3�줸
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
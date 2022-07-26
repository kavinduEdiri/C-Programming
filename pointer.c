#include <stdio.h>

int main(){

    int var =20;
    int *ip;
    ip=&var;



    printf("Address of var veriable: %x \n",&var);
    printf("Address of stored in ip variable: %x \n",ip);
    printf("Value of *ip variable: %x \n",*ip);




    return 0;






}
#include <stdio.h>

void main(){
    int a=10000,b=100,c=999;
    int *arr={&a,&b,&c};
    printf("a 的地址%p  b的地址%p  c的地址是%p \n",arr[0],arr[1],arr[2]);
     printf("a 的值%d  b的值%d  c的值是%d  \n",arr[0],arr[1],arr[2]);
}
#include <stdio.h>

typedef struct  Struct{
    unsigned data1; //默认占用4位
    unsigned data2:6;  //占用6位
    unsigned char ch :8; //占用8位的字符
} Struct;

void main(){
     Struct st={1,10,'A'};
    printf("%d  %d  %d",st.data1,st.data2,st.ch);
}

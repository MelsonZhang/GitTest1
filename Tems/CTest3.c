#include <stdio.h>
#include <string.h>

char *strlong(char *str1, char *str2){
    if(strlen(str1) >= strlen(str2)){
        return str1;
    }else{
        return str2;
    }
}

int main(){
    char str1[30]="1111111", str2[30]="222222", *str;
    str = strlong(str1, str2);
    printf("Longer string: %s\n", str);

    return 0;
}
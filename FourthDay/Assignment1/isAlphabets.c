#include<stdio.h>
void isAlphabets(char a){
    if(a>='a'&& a<='z'){
        printf("char is alphabet");
    }else if(a>='A' && a<='Z'){
        printf("char is alphabet");
    }else{
        printf("not alphabet");
    }
}
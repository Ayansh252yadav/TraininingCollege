#include<stdio.h>
void toCheckAlphabets(char a){
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' ||
       a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){  
        printf("%c is a vowel\n", a);
    } else {
        printf("%c is a consonant\n", a);
    }
}
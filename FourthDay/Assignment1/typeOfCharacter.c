#include<stdio.h>
void typeOfCharacter(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        printf("%c is lowercase letter", ch);
    }
    else if (ch >= 'A' && ch <= 'Z') {
        printf("%c is uppercase letter", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("%c is Number", ch);
    }
    else {
        printf("%c is Special character", ch);
    }
}
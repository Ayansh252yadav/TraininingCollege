#include<stdio.h>
#include <string.h>
#include <conio.h>
int main(){
    char user[]="123";
    char password[]="123";
     char username[5];
    char passworduser[5];
    char che;
    printf("enter your username\n");
    scanf("%s",&username);
     printf("enter your password in 5 character\n");
    // scanf("%s",&password);
    int i=0;
    char ch;
    while((ch=getch())!=13 ){
        
        passworduser[i++]=ch;
        printf("*");
    }
  passworduser[i] = '\0'; 
    if(strcmp(user, username) == 0 && strcmp(password, passworduser) == 0) {
        printf("\nWelcome to dashboard");
    } else {
        printf("\nInvalid username or password");
    }

    return 0;
    }


#include <stdio.h>

int main() {
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
    int j=0
    while((ch=getch())!=13 ){
        
        passworduser[i++]=ch;
        printf("*");
    }
  passworduser[i] = '\0'; 
    if(strcmp(user, username) == 0 && strcmp(password, passworduser) == 0) {
        printf("\nYou are loggedd in successfully\n");
     
    int apples = 21;
    int userPick, compPick;
   printf("**********************************************************\n");
    printf("Welcome to Apple Pick Game!\n");
    printf("There are 21 apples.\n");
    printf("You can pick 1 to 4 apples each turn.\n");
    printf("Whoever picks the last apple wins!\n\n");
   printf("\n=============================================================================\n");
    while (apples > 0) {

        // User Turn
        printf("Apples total left: %d\n", apples);
        printf("How many apples do you want to pick (1-4)= ");
        scanf("%d", &userPick);

        if (userPick < 1 || userPick > 4) {
            printf("Invalid choice Pick between 1 and 4\n");
            continue;
        }

        apples = apples - userPick;

        if (apples <= 0) {
            printf(" You picked the last apple. You win!\n");
            break;
        }

        // Computer Turn 
        compPick = 5 - userPick;
        printf("Computer picks %d apples.\n", compPick);

        apples = apples - compPick;

        if (apples <= 0) {
            printf("Computer picked the last apple Computer wins\n");
            break;
        }
    }
}else {
        printf("\nInvalid username or password");
    }

    return 0;
}

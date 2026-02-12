#include<stdio.h>
void isPosNeg(int n){
    if(n<0){
        printf("%d is negative number",n);
    }else if(n==0){
         printf("%d is zero neither positive nor negative",n);
    }
    else {
         printf("%d  is postive number",n);
    }
}
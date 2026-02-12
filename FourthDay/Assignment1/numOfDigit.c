#include<stdio.h>
void numOfDigit(int n){
    int count=1;
    while (n!=0)
    {
        /* code */
        count++;
        n/=10;
    }
    printf("number of digit are %d",count);
    
}
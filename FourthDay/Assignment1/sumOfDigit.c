#include<stdio.h>
void sumOfDigit(int n){
    int sum=0;
    while(n!=0){
        int rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("Sum of all digits are %d",sum);
}
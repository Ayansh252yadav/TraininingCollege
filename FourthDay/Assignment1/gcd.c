#include<stdio.h>
void gcd(int a,int b){
     while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD = %d", a);
}
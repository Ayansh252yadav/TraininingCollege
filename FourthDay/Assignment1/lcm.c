#include<stdio.h>
void lcm(int a ,int b){
    int temp=0;
    int x=a;
    int y=b;
    while(b != 0) {
         temp = b;
        b = a % b;
        a = temp;
    }
    int t=(x*y)/a;
    printf("lcm is %d",t);
}
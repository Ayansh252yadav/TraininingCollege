#include<stdio.h>
void greatestThree(int a,int b,int c){
   if(a>b && a>c){
    printf("%d is greater",a);
   }else if(b>c && b>a){
    printf("%d is greater",b);
   }
   else{
    printf("%d is greater",c);
   }
}
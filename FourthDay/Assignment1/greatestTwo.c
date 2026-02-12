#include<stdio.h>
void greatestTwo(int a,int b){
    if(a>b){
        printf("%d is greater number",a);
    }else if(a==b){
        printf("both are equal");
    }else{
         printf("%d is greater number",b);
    }
}
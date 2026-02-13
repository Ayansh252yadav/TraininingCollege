#include<stdio.h>
int main(){
    int arr[10];
    printf("enter number to check number of even or odd\n");
    for(int i=0;i<10-1;i++){
        scanf("%d ",&arr[i]);
    }
    int evenCount=0;
    int oddCount=0;
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            evenCount++;
        }else{
            oddCount++;
        }
    }
    printf("evenCount= %d",evenCount);
    printf("oddCount= %d",oddCount);
}
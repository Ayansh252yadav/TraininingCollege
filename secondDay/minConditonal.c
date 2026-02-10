#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k,int arr[]) {
  //Write your code here.
  int and=k;
  int andRes=0;
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        and=arr[i]&arr[j];
        // printf("%d " ,and);
       if(and<k){
        if(andRes<k && andRes<=and){

            andRes=and;
        }
       }
    }
  }
  printf("%d",andRes);
  int orRes=0;
  int or=k;
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        or=arr[i]|arr[j];
        // printf("%d " ,or);
       if(or<k){
        if(orRes<k && orRes<=or){

            orRes=or;
        }
       }
    }
  }

  printf("\n%d ",orRes);
  int xorRes=0;
  int xor=k;
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        xor=arr[i]^arr[j];
       if(xor<k){
        if(xorRes<k && xorRes<=xor){

            xorRes=xor;
        }
       }
    }
  }

  printf("\n%d ",xorRes);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    int arr[n];
    int m=0;
    for(int i=1;i<=n;i++){
        arr[m]=i;
        m++;
    }
    //  for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }
    calculate_the_maximum(n, k,arr);
  
    return 0;
}

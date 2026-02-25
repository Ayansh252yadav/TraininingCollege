#include<stdio.h>
int handshakes(int n){
    if(n==1){
        return 1;
    }
    return n+handshakes(n-1);
}
int main(){
    int n=10;
    int m=handshakes(n);
    printf("%d ",handshakes(n-1));
}
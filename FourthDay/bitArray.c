#include<stdio.h>
long long pow1(long long x,long long n){
    long long ans=1;
    while(n!=0){
        if(n&1){
          ans=ans*x;
        }
       n= n>>1;
       x=x*x;
    }
    return ans;
}
int main(){
    long N,S,P,Q;
    scanf("%ld %ld %ld %ld",&N,&S,&P,&Q);
     
     long long mod =pow1(2,31);
    long long current = S % mod;
    long long first = current;   
    long long count = 1;

    for (long long i = 1; i < N; i++) {
        current = (current * P + Q) % mod;
        if (current == first) {
            break;   
        }
        first=current;
        count++;
    }
    printf("%lld ",count);
}

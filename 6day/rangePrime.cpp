#include<iostream>
using namespace std;
int main(){
    int n=10;
    cout<<"enter the number upto which prime are required ";
    cin>>n;
  for(int i=2;i<=n;i++){
    bool isPrime=true;
   for(int j=2;j<i;j++){
    if(i%j==0){
        isPrime=false;
        break;
    }
   }
   if(isPrime){
    cout<<i<<" ";
   }
  }

}
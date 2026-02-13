#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"enter number";
     for(int i=0;i<10-1;i++){
        cin>>arr[i];
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
    cout<<"evenCount=" <<evenCount;
    cout<<"0ddCount=" <<oddCount;
    
}
#include<iostream>
using namespace std;
class add{
    int arr[10],b,c;
     int evenCount=0;
    int oddCount=0;
    public:
    void input(){
       cout<<"enter number";
     for(int i=0;i<10-1;i++){
        cin>>arr[i];
    }
    }
    void process(){
       
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            evenCount++;
        }else{
            oddCount++;
        }
    }
    }
    void display(){
         cout<<"evenCount=" <<evenCount;
    cout<<"0ddCount=" <<oddCount;
    }
};
int main(){
    add obj;
    obj.input();
    obj.process();
    obj.display();
}
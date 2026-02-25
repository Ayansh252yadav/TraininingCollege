#include<iostream>
using namespace std;
void month1(int  month,int year){
    if(year%4==0 && year%100==0){
      if(month==2){
        cout<<"29 days";
      }
    }
      else if(year%400==0){
         if(month==2){
        cout<<"29 days";
      }
      }
    else{
if(month==1){
        cout<<"31 days";
    }else if(month==2){
        cout<<"28 days";
    }else{
        cout<<"30 days";
    }
    }
    
}
int main(){
    int n;
    int year;
    cout<<"enter 1 for january march may july ,August,october,december and 0 for rest of the month and 2 for feburary";
    cin>>n;
    cout<<"enter your year";
    cin>>year;
    month1(n,year);
}
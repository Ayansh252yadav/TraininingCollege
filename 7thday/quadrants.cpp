#include<iostream>
using namespace std;
 void quadrant(int x,int y){
    if(x==0 && y==0){
        cout<<"origin";
    }
    if(x>=0 && y>0){
        cout<<"1st quadrant"<<endl;
    }
    if(x<=0 && y>0){
        cout<<"2nd quadrant";
    }
    if(x<=0 && y<0){
        cout<<"3 rd quadrant";
    }
    if(x>=0 && y<0){
        cout<<"4th quadrant";
    }
 }
 int main(){
    quadrant(-3,4);
 }
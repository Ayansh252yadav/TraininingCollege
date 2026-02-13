#include<iostream>
using namespace std;
class add{
    int a,b,c;
    public:
    void input(){
        cout<<"enter number a=";
        cin>>a;
         cout<<"enter number b=";
        cin>>b;
    }
    void process(){
        c=a+b;
    }
    void display(){
        cout<<"sum is"<<c;
    }
};
int main(){
    add obj;
    obj.input();
    obj.process();
    obj.display();
}
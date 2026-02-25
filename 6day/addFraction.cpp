#include<iostream>
#include<math.h>
using namespace std;
// void addFraction(float a,float b){

// }
int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
 }
int main(){
int a,b,c,d;
cout<<"enter nemurator of first fraction ";
cin>>a;
cout<<"enter denominator of first fraction";
cin>>b;

cout<<"enter nemurator of second fraction ";
cin>>c;
cout<<"enter denominator of second fraction";
cin>>d;

int result=(a * d) + (c * b);;
int result2=b*d;
int gcd1 = gcd(result, result2);

        result /= gcd1;
        result2/= gcd1;

        cout<<result << "/" <<result2;
}
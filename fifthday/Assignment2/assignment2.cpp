#include<iostream>
#include<cmath>
using namespace std;
class Assign{
    public:
    void sumRange(int start,int end){
      int noTerms=end-start+1;
      int fL=start+end;
      int result=(noTerms*fL)/2;
      cout<<"1.Range sum is "<<result<<endl;
    }
    void reverseNumber(int n){
      int rev=0;
        while (n!=0)
        {
            /* code */
            int rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }
        cout<<"2.reverse of number is "<<rev<<endl;
    }
    int factorial(int n){
        if(n==0 || n==1){
            return 1;
        }
        return n*factorial(n-1);
    }
    void fibonacciSeries(int n){
        cout<<endl;
        int arr[n];
        arr[0]=0;
        arr[1]=0;
        arr[2]=1;
        int prev=arr[1]+arr[2];
        cout<<"16.";
        for(int i=3;i<n;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
   void leapYear(int n){
    cout<<endl;
    if(n%100==0 && n%400==0){
        cout<<"3.Leap year"<<endl;
    }else if(n%4==0){
      cout<<"3.leap year";
    }else{
        cout<<"3.not leap year"<<endl;
    }
   }
   void primeNumber(int n){
    if(n==2 || n==3){
        cout<<"4.prime"<<endl;
        return;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i!=0){
            cout<<"4.prime"<<endl;
            break;
        }else{
            if(i==n/2){
                cout<<"4.not prime"<<endl;
            }
        }
    }

   }
   void isPallindrome(int n){
    int temp=n;
    int rev=0;
        while (n!=0)
        {
            /* code */
            int rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }
        if(temp==rev){
            cout<<"5.Number is pallindrome"<<endl;
        }else{
            cout<<"5.Not pallindrome"<<endl;
        }
   }
   void isArmstrong(int n){
    int count=0;
    int temp=n;
    while(n!=0){
    int rem=n%10;
    count++;
    n/=10;
    }
    int t=temp;
    int result=0;
    while(temp!=0){
     int rem=temp%10;
     result+=pow(rem,count);
     temp/=10;
    }
    if(t==result){
        cout<<"6.number is armstrong"<<endl;
    }else{
        cout<<"6.not a armstrong number"<<endl;
    }
   }
   void strongNumber(int n){
    int temp=n;
    int result=0;
    while(temp!=0){
     int rem=temp%10;
     result+=factorial(rem);
     temp/=10;
    }
    if(n==result){
        cout<<"7.Number is strong"<<endl;
    }else{
        cout<<"7.Number is not strong"<<endl;
    }
   }
   void isperfect(int n){
    int result=0;
    for(int i=1;i<n;i++){
      if(n%i==0){
        result+=i;
      }
    }
    if(result==n){
        cout<<"8.number is perfect"<<endl;
    }else{
        cout<<"8.number is not perfect"<<endl;
    }
   }
   void isFriendlyPair(int m,int n){
    int result1=0;
    int result2=0;
    for(int i=1;i<n;i++){
      if(n%i==0){
        result1+=i;
      }
    }
       for(int i=1;i<m;i++){
      if(m%i==0){
        result2+=i;
      }
    }
    if((m/result2)==(n/result1)){
        cout<<"10.true friendly pair"<<endl;
    }else{
        cout<<"10.not friendly pair"<<endl;
    }
   }
   void automorphic(int n){
    cout<<endl;
    int count =0;
    int temp=n;
    while (n!=0)
    {
        /* code */
        count++;
        n/=10;
    }
    int sqr=pow(temp,2);
    int on=0;
    while(count){
        int rem=sqr%10;
        on=on*10+rem;
        count--;
    }
    int num=0;
    while (on!=0){
     int rem=on%10;
    num=num*10+rem;
    on/=10;
    }
    if(num==temp){
        cout<<"12.number is automorphic"<<endl;
    }else{
        cout<<"12.number is not automorphic"<<endl;
    }
   }
   int pow(int x,int n){
    int ans=1;
    while(n!=0){
        if(1&n){
            ans=ans*x;
        }
        n=n>>1;
        x=x*x;
    }
    return ans;
   }
   void isharshad(int n){
    int temp=n;
    int sum=0;
    while (temp!=0){
        int rem=temp%10;
        sum+=rem;
        temp/=10;
    }
    if(n%sum==0){
        cout<<"13.number is harshad or niven"<<endl;
    }else{
        cout<<"13.number is not harshad or niven"<<endl;
    }
    
   }
   void isAbundant(int n){
    int result=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            result+=i;
        }
    }
    if(result>n){
        cout<<"number is abundant"<<endl;
    }else{
        cout<<"number is not abundant"<<endl;
    }
   }
   void factors(int n){
     int arr[n];
     int k=0;
     for(int i=1;i<=n;i++){
        if(n%i==0){
            arr[k]=i;
            k++;
        }
     }
     cout<<"14.";
     for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
     }
   }
};
int main(){
    Assign a;
    a.sumRange(5,10);
    a.reverseNumber(531);
    a.leapYear(2015);
    a.primeNumber(5);
    a.isPallindrome(121);
    a.isArmstrong(154);
    a.strongNumber(142);
    a.isperfect(5);
    a.isFriendlyPair(30,140);
    cout<<"11.factorial of number is "<<a.factorial(5);
    a.automorphic(4);
    a.isharshad(23);
    a.factors(5);
    cout<<endl<<"15. power of number is "<<a.pow(2,5);
    a.fibonacciSeries(10);
}
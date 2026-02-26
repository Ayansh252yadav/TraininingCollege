#include<iostream>
using namespace std;
int beautifulDays(int i, int j, int k) {
    int count=0;
  for(int m=i;m<=j;m++){
      int temp=m;
      int temp2=m;
      int rev=0;
      while(temp2!=0){
          int rem=temp2%10;
          rev=rev*10+rem;
          temp2/=10;
      }
    
      if((abs(temp-rev))%k==0){
          count++;
      }
  }
    return count;
}

int main()
{
    int i,j,k;
    cin>>i>>j>>k;
  cout<<beautifulDays(i,j,k);
}


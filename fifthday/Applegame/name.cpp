#include<iostream>
#pragma pack(1) //used to restrict padding 
using namespace std;
struct s1{
	int n;
	char t;
	double m;
	char e;
	
};
int main(){
	cout<<sizeof(s1);
	return 0;
}

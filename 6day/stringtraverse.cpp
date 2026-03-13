#include<iostream>
#include<cstring>
#include<sstream>
#include<iterator>
using namespace std;
int main(){
//	string str1="hey c++";
//	string str2="hello c++";
//	for(int i=0;i<str.size();i++){
//		cout<<str[i];
//	}
//	cout<<endl;
//	for(char ch:str){
//		cout<<ch;
//	}
//	cout<<endl;
//	str.pop_back();
//	str.push_back('!');
//	for(auto it=str.begin();it!=str.end();it++){
//		cout<<*it;
//	}
// str.insert(0,"c++ ");
// cout<<str<<endl;
// str.erase(0,3);

// cout<<str.substr(4,3);
// int pos=str.find("hello");
// if(pos<str.size()){
// 	cout<<"\"hello\"fount at index:"<<pos;
//	  }
//int val=strncmp(str1,str2,5);
//cout<<val;
//char src[]="hello";
//char dest[25];
//strcpy(dest,src);
//cout<<dest;
//cout<<endl;
//str1.replace(0,3,str2);
//cout<<str1;

//string str1="Hello java";
//string str2="Hey world";
//cout<<str1.replace(6,5,str2,4,5);
// string str="123";
// int num;
// stringstream ss(str);
// ss>>num;
// cout<<num+10;
//int num=252;
//string str;
//stringstream ss;
//ss<<num;
//ss>>str;
//cout<<str+"7";
 string line="c++ is powerfull";
 string word;
 stringstream ss(line);
 while(ss>>word){
 	cout<<word<<endl;
 }

cout<<endl;

 return 0;
}

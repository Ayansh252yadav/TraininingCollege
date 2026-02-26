#include<iostream>
using namespace std;
string timeConversion(string s) {
//    for(int i=0;i<s.size();i++){
//        cout<<s[i]<<endl;
//    }
    char sl=s[s.size()-2];
    
    string st="";
    string temp="";
//	st+=sl;
int count=0;
    if(sl=='A'){
    	for(int i=0;i<=s.size()-2;i++){
    		st="";
    	st+=s[i];
    	st+=s[i+1];
    	cout<<st<<endl;
    	if(st=="12"){
    		temp+='0';
    		temp+='0';
    		count+=2;;
    		break;
		}else{
			temp+=s[i];
		}
	}
	if(count<s.size()-2){
		for(int i=count;i<=s.size()-2;i++){
			temp+=s[count];
		}
	}
	 for(int i=0;i<temp.size();i++){
        cout<<temp[i];;
    }
	}
    
cout<<st;
}
int main(){
	timeConversion("12:01:00AM");
}

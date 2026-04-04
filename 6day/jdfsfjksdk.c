#include<stdio.h>
int main(){
	FILE *fp=NULL;
	fp=fopen("ayansh.txt","w+");
//	char ch='A';
//	int i=0;
	if(fp==NULL){
		printf("file is not found !!");
	}else{
		printf("file is found");
//		for( i=0;i<26;i++){
//			
//			fputc(ch,fp);
//			ch++;
//		}
string str={"A" ,"quick", "brown", "fox", "jumps", "over","lazy", "dog"};


//char ch=fgetc(fp);
//printf("%c",ch);
while(!feof(fp)){
	string str2=fgetc(fp);
	printf(str2);
}

	}
	return 0;
}

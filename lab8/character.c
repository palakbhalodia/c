#include<stdio.h>
void main(){
	char ch;
	printf("enter char ch : ");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90){
		printf("uper case : %c",ch);
	}
	else if(ch>=97 && ch<=122){
		printf("lower case : %c",ch);
	}
	else if(ch>=48 && ch<=57){
		printf("digit : %c",ch);
	}
	else{
		printf("special char : %c",ch);
	}

	
}

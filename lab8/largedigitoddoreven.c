#include<stdio.h>
void main(){
	int a,rem;
	printf("enter a : ");
	scanf("%d",&a);
	rem = a%10;
	if(rem%2==0){
		printf("%d is even",rem);
	}
	else{
		printf("%d is odd",rem);
	}
}

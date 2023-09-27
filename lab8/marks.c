#include<stdio.h>
void main(){
	int sub1,sub2,sub3,sub4,sub5;
	float per;
	printf("enter sub1 : ");
	scanf("%d",&sub1);
	printf("enter sub2 : ");
	scanf("%d",&sub2);
	printf("enter sub3 : ");
	scanf("%d",&sub3);
	printf("enter sub4 : ");
	scanf("%d",&sub4);
	printf("enter sub5 : ");
	scanf("%d",&sub5);
	per = (sub1+sub2+sub3+sub4+sub5)/5;
	if(per<35){
		printf("fail");
	}
	else if(per<=36,per>=45){
		printf("pass");
	}
	else if(per<=46,per>=60){
		printf("second class");
	}
	else if(per<=61,per>=70){
		printf("first class");
	}
	else if(per>70){
		printf("distriction");
	}
}

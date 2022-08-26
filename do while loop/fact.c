#include<stdio.h>
void main(){
	int i=1,fact=1,num;
	printf("enter the number:");
	scanf("%d",&num);
	do{
		fact=fact*i;
		i++;
	}while(i<=num);
	printf("factorial is:%d",fact);
}

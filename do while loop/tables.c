#include<stdio.h>
void main(){
	int i=1,num;
	printf("enter the number:");
	scanf("%d",&num);
	do{
		printf("\n%d",num*i);
		i++;
	}while(i<=10);
}

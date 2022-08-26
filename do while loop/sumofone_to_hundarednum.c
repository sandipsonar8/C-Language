#include<stdio.h>
void main(){
	int i=1,total=0;
	do{
		total=total+i;
		i++;
	}while(i<=100);
	printf("sum of 1 to 100 is:%d",total);
}

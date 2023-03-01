#include<stdio.h>

int main(){
	int f,l,sum;
	printf("Enter number:");
	scanf("%d",&f);
	l=f%10;
	while(f>=10){
		
		f=f/10;
	}
	sum = f+l;
	printf("sum of frist and last digit of this number:%d",sum);
	return 0;

}

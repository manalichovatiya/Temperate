#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter any number:");
    scanf("%d",&b);
    for (a = b; a >1; a--)
    {   
        c*=a;
    }

        printf("Factorial of the number is:%d",c);
    return 0;
}

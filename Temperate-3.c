#include<stdio.h>
int main (){
    int a,b;
    printf("Enter any number:");
    scanf("%d",&a);
    for (a = a; a >0; a--)
    {
        a= a/10;
        b++;
    }
    printf("number of digits in this number is:%d",b);
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("Add, Subtract, Multiply, or Divide?\n");
    printf("Enter first letter:(Capital)\n");
    ch=getchar();

    printf("\nEnter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    if(ch=='A') printf("%d",a+b);
    else if(ch=='S') printf("%d",a-b);
    else if(ch=='M') printf("%d",a*b);
    else if(ch=='D' && b!=0) printf("%d",a/b);

    return 0;

}

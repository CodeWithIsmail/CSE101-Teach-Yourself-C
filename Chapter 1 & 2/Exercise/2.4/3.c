#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter number:\n");
    scanf("%d",&n);

    for(i=2;i<n;i++){
        if(n%i==0){
           printf("%d ",i);
        }
    }

    return 0;
}

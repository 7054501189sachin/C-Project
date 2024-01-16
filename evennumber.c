#include<stdio.h>
#include<conio.h>
int main()
{
    int temp;
    int a,b;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("value of a");
    printf("value of b");
    return 0;
}
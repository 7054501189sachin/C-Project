#include<stdio.h>
void main()
{

int n=5;
// outer loop
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n-i;j++)
    {
        printf("");
    
    // space print
    for(int j=1;j<=i;j++)
    {
        printf("*");
    }
    printf("\n");
}
}
}

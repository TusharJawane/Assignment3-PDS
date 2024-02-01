#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter a, b and c: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a>=b && a>=c) printf("Largest number is %d\n",a);
    if(b>=c) printf("Largest number is %d\n",b);
    else printf("Largest number is %d \n",c);
}
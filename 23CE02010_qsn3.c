#include<stdio.h>
void main()
{
    printf("Enter sides of triangle \n");
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a+b>c && b+c>a && c+a>b) printf("%d , %d , %d can be sides of a triangle\n",a,b,c);
    else printf("%d , %d , %d can not be sides of a triangle\n",a,b,c);
}
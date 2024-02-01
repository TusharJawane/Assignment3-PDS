#include<stdio.h>
void main()
{
    float x1,y1,x2,y2,x3,y3,m,n;
    printf("Enter (x,y) coordinates of first point\n");
    scanf("%f", &x1);
    scanf("%f", &y1);
    printf("Enter (x,y) coordinates of second point\n");
    scanf("%f", &x2);
    scanf("%f", &y2);
    printf("Enter (x,y) coordinates of first point\n");
    scanf("%f", &x3);
    scanf("%f", &y3);
    m=(y2-y1)/(x2-x1);
    n=(y3-y2)/(x3-x2);
    if(m==n) printf("Points lie on a straight line");
    else printf("Points do not lie on a straight line");
}

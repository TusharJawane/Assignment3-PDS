#include<stdio.h>
int main()
{
    printf("Enter number of days member was late");
    int d;
    scanf("%d", &d);
    int f;
    if(d>=1 && d<=5) f=d;
    else if(d<=10) f=d*2;
    else if(d<=30) f=d*5;
    else
    {
        printf("Your membership is cancelled\n");
        return 0;
    }
    printf("Your late fine is= %d\n",f);
    return 0;
}
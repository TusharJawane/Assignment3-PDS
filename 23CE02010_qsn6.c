#include<stdio.h>
#include<math.h>
int main()
{
    printf("Enter a number \n");
    int n,div1,div2;
    scanf("%d", &n);
    int temp=n*n;
    printf("%d\n", temp);
    double k=1.0;
    do
    {
        div2=temp/round(pow(10,k));
        div1=temp-(div2*round(pow(10,k)));
        if(div1!=0 && div2!=0)
        {
            if(div1+div2==n)
            {printf("%d is a kaprekar number\n",n);return 0;}
            else
            {}
        }
        else{}
        k++;
    } while (div2!=0);
    printf("%d is not a kaprekar number\n",n);
    return 0;
    

}
#include<stdio.h>
int main(){
    int m,n,k;
    float t,w;
    printf("\n Enter obtained marks: ");
    scanf("%d",&m);
    printf("\n Enter total number of classes: ");
    scanf("%d",&k);
    printf("\n Enter number of classes attended: ");
    scanf("%d",&n);
    w=(float)n/k;
    t=m*w;
    if(0<=m && m<=100 && n<=k)
    {
        if(t>=90)
        printf("Final score %f\nGrade=Ex", t);
        else if(t>=80)
        printf("Final score %f\nGrade=A", t);
        else if(t>=70)
        printf("Final score %f\nGrade=B", t);
        else if(t>=60)
        printf("Final score %f\nGrade=C", t);
        else if(t>=50)
        printf("Final score %f\nGrade=D", t);
        else if(t>=40)
        printf("Final score %f\nGrade=P", t);
        else
        printf("Final score %f\nGrade=F", t);
        
    }
    else
    printf("\n Error");
return 0;
}
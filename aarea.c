#include<stdio.h>
int main()
{
    int base,height;
    printf("enter base:");
    scanf("%d",&base);
    printf("enter height:");
    scanf("%d",&height);
    int Area=area(base,height);
    printf("Area is:%d\n",Area);
}
int area(int a,int b)
{
    return .5*a*b;
}

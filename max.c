#include<stdio.h>
void max(int *p, int*q);
int main()
{
    int a,b;
    printf("enter two  numbers");
    scanf("%d%d",&a,&b);
    max(&a,&b);
}
void max(int *p, int*q)
{
    if(*p>*q)
    {
        printf("%d is greater than %d",*p,*q);
    }
    else
    printf("%d is greater than %d",*q,*p);

}
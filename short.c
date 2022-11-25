#include<stdio.h>
void shorte(int *, int);
int main()
{
    int n;
    printf("how many numbers you want to enter");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    shorte(a,n);
    for(i=0;i<=n-1;i++)
    {
        printf(" %d ",a[i]);
        
    }

}
void shorte(int *p, int size)
{
    int i,j,c;
    for(i=0;i<=size-1;i++)
    {
        for(j=i+1;j<=size-1;j++)
        {
            if(*(p+i)>*(p+j))
            {
                c=*(p+j);
                *(p+j)=*(p+i);
                *(p+i)=c;
            }
        }

    }
}
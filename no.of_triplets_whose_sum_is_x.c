#include <stdio.h>
int main()
{
    int a[10],n;
    printf("Enter the no.of elements in the array : ");
    scanf("%d",&n);
    printf("Enter the elements in the array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x,count =0;
    printf("Enter the value : ");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if((a[i]+a[j]+a[k])==x) 
                {
                    count++;
                    printf("\n(%d,%d,%d)",i+1,j+1,k+1);
                }
            }
        }
    }
    printf("\nThe no.of triplets are %d",count);
    return 0;
}
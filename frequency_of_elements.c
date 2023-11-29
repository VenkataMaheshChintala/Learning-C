#include <stdio.h>
int main()
{
    int n,count=1,k;
    printf("Enter the no.of elements in the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array : ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                k=a[j];
                a[j]=a[i];
                a[i]=k;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        count=1;
        if(i>0 && a[i]==a[i-1]) continue;
        else
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j]) count++;
            }
        }
        printf("%d occurs %d times in the array\n",a[i],count);
    }
    return 0;
}
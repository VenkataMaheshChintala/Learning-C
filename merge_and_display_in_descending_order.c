#include <stdio.h>
int main()
{
    int n,m,k=0;
    printf("Enter no.of elements in array 1 : : ");
    scanf("%d",&n);
    printf("Enter no.of elements in array 2 : ");
    scanf("%d",&m);
    int a[n],b[m],c[m+n];
    printf("Enter the elements in array 1 : ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter the elements in array 2 : ");
    for(int j=0;j<m;j++) scanf("%d",&b[j]);
    for(int i=0;i<n;i++) c[i]=a[i];
    for(int i=n;i<(m+n);i++)
    {
        c[i]=b[k];
        k++;
    }
    for(int i=0;i<(m+n);i++)
    {
        for(int j=i+1;j<(m+n);j++)
        {
            if(c[i]<c[j])
            {
                k=c[j];
                c[j]=c[i];
                c[i]=k;
            }
        }
    }
    printf("The array is descending order is : ");
    for(int i=0;i<(2*n);i++) printf("%d ",c[i]);
    return 0;
}
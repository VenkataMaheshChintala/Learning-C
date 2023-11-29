#include <stdio.h>
int main()
{
    int n,k,temp=0;
    printf("Enter the no.of elements in the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array : ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter the value of k : ");
    scanf("%d",&k);
    int b=k;
    for(int i=1;i<=k;i++)
    {
        temp = a[n-1];
        for(int j=(n-1);j>0;j--) a[j]=a[j-1];
        a[0]=temp;
    }    
    printf("The resultant array is : ");
    for(int b=0;b<n;b++) printf("%d ",a[b]);           
    return 0;
}
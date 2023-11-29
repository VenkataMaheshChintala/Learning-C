#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements : ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int b[10],j=n-1;
    for(int i=0;i<n;i++)
    {
        b[i]=a[j];
        j--;
    }
    j=n-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[j])
        {
            if(i==n-1) printf("The array is a palindrome");
            j--;
        }
        else{
            printf("The array is not a palindorme");
            break;
        } 
    }
    return 0;
}
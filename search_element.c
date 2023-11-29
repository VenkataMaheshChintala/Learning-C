#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the no.of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ele;
    printf("enter the element you want to search : ");
    scanf("%d",&ele);
    for(int i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            printf("The wanted element %d is found at %d position in the array",ele,i+1);
            break;
        }
        else 
        {
            if(i==(n-1)) printf("The element is not found in the given array");
        }
    }
    return 0;
}
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("Enter a, b, c values : ");
    scanf("%f %f %f", &a, &b, &c);
    float dis;
    float root, root1;
    dis = (b*b)-(4*a*c);
    float sqt = sqrt(dis);
    if (dis>0)
    {
        root = ((b*(-1))+(sqrt(dis)))/(2*a);
        root1 = ((b*(-1))-(sqrt(dis)))/(2*a);
        printf("The roots are real and they are %f, %f", root, root1 );
    }
    else if(dis==0)
    {
        root = (b*(-1))/(2*a);
        printf("equation has one real root and the root is %f",root);
    }
    else
    {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqt / (2 * a);
        printf("The roots are imaginary and they are %.2f + %.2fi, %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
        printf("The roots are imaginary");
    }
    return 0;
}
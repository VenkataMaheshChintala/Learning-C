// This code is to find out the character when ASCII value is entered.
#include <stdio.h>
int main() {
    int x;
    printf("Enter the ASCII value : ");
    scanf("%d",&x);
    char ch;
    ch=x;
    printf("Character is %c",ch);
    return 0;
}
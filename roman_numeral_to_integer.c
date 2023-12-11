// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
#include <stdio.h>
#include <string.h>
int romantoInt(char roman[50]) {
    int ans=0;
    for(int i=0;roman[i]!='\0';i++)
    {
        switch(roman[i])
        {
            case 'I':
            if(roman[i+1] == 'V' || roman[i+1] == 'X') ans-=1;
            else ans+=1;
            break;
            case 'V':
            ans+=5;
            break;
            case 'X':
            if(roman[i+1] == 'L' || roman[i+1] == 'C') ans-=10;
            else ans+=10;
            break;
            case 'L':
            ans+=50;
            break;
            case 'C':
            if(roman[i+1]=='D' || roman[i+1]=='M') ans-=100;
            else ans+=100;
            break;
            case 'D':
            ans+=500;
            break;
            case 'M':
            ans += 1000;
            break;
            default: ans+=0;
        }
    }
    return ans;
}
int main()
{
    char roman[50];
    printf("Enter the roman number : ");
    scanf("%s",roman);
    int ans = romantoInt(roman);
    printf("%d",ans);
    return 0;
}
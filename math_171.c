int titleToNumber(char* columnTitle) {
    char str[30];
    int i=0,y=0,x=0,ans=0;
    while(*columnTitle!='\0') {
        str[i] = *columnTitle;
        columnTitle++;
        i++;
    }
    str[i] = '\0';
    int length = strlen(str);
    for(i=length-1,y=0;i>=0;i--,y++) {
        x = (int) str[i]-64;
        ans+=x*pow(26,y); 
    }
    return ans;
}
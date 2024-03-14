int palin(char *s,char *s1,int n)
{
    char str1[n];
    char str2[n];
    char *ss1=s1,n1=0;
    for(int i=0;i<=n;i++){
        str1[i]=*ss1;
        ss1--;
    }
    for(int i=0;i<=n;i++)
    {
        str2[i]=s[i];
    }
    if(str1.comp(str2)==0){
        return str1;
    }
    else{
        return NULL;
    }
}
char* longestPalindrome(char* s) {
    char*s1=s;
    int n=0;
    while(*s!='\0')
    {
        char*s1=s;
        while(*s1!='\0')
        {
            s1++;n++;
            char *j=palin(s,s1,n);
            if(j!=NULL)
            {
                return j;
            }
        }
        s++;
    }
    
}

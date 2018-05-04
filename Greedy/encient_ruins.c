#include<stdio.h>

int main(){
    
    char s[51];
    int i;
    scanf("%s",s);
    for( i=0;s[i]!='\0';i++){
        if(s[i]=='?'){
            if((i && s[i-1]=='a') ||  s[i+1]=='a')
                s[i]='b';
            else
                s[i]='a';
        }
    }
    printf("%s\n",s);
}
    

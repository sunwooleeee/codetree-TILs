#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    char s[100];
    int n;
    scanf("%s %d",&s,&n);
    int m=strlen(s);
    if (n>=m){
        for (int i=m-1;i>=0;i--){
            printf("%c",s[i]);
        }
    }
    else{
        for (int i=m-1;i>m-1-n;i--){
            printf("%c",s[i]);
        }
    }
    return 0;
}
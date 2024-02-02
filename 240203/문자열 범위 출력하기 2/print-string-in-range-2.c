#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    char s[100];
    int n;
    scanf("%s %d",&s,&n);
    if (strlen(s)<n){
        for (int i=strlen(s)-1;i>=0;i--){
            printf("%c",s[i]);
        }
    }
    else{
        for (int i=strlen(s)-1;i>=strlen(s)-n;i--){
            printf("%c",s[i]);
        }
    }
    return 0;
}
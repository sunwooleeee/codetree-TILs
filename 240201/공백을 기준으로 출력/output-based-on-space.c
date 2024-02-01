#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    char s[101],c[101];
    fgets(s,101,stdin);
    fgets(c,101,stdin);
    for (int i=0;i<strlen(s);i++){
        if (s[i]=='\n' || s[i]==' '){
            continue;
        }
        printf("%c",s[i]);
    }
    for (int i=0;i<strlen(c);i++){
        if (c[i]=='\n' || c[i]==' '){
            continue;
        }
        printf("%c",c[i]);
    }
    return 0;
}
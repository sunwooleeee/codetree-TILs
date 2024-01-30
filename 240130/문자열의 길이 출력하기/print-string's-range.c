#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    char a[100];
    char b[100];
    scanf("%s%s",&a,&b);
    int c=strlen(a)+strlen(b);
    printf("%d",c);
    return 0;
}
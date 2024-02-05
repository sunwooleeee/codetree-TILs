#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    char a[101],b[101];
    scanf(" %s %s",&a,&b);
    char aa[300]=strcat(a,b);
    char bb[300]=strcat(b,a);
    if (aa==bb){
        printf("true");
    }
    else{
        printf("else");
    }
    return 0;
}
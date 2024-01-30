#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    char a[100],b[100];
    scanf(" %s %s",&a,&b);
    int len_a,len_b;
    len_a=strlen(a);
    len_b=strlen(b);
    if (len_a==len_b){
        printf("same");
    }
    else if (len_a>len_b){
        printf("%s %d",a,len_a);
    }
    else if (len_a<len_b){
        printf("%s %d",b,len_b);
    }
    return 0;
}
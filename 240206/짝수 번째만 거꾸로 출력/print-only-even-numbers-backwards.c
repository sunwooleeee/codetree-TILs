#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char a[102];
    char b[102]="";
    scanf("%s",&a);
    int n=strlen(a);
    for (int i=0;i<=n-1;i++){
        
        if (i%2!=0){
            strcat(b,a[i]);
        }
    }
    n=strlen(b);
    for (int i=n-1;i>=0;i--){
        printf("%c",b[i]);
    }
    return 0;
}
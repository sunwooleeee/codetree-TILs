#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    char a[10001];
    for (int i=0;i<n;i++){
        char b[1001];
        scanf("%s",&b);
        strcat(a,b);
    }   
    n=strlen(a);
    int cnt=0;
    for (int i=0;i<n;i++){
        printf("%c",a[i]);
        cnt+=1;
        if (cnt==5){
            printf("\n");
            cnt=0;
        }
    }
    return 0;
}
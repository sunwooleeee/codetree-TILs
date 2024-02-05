#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    char a[300],b[300];
    scanf(" %s %s",&a,&b);
    int n=strlen(a);
    int m=strlen(b);
    for (int i=0;i<=n;i++){
        if (i==n){
            b[m+i]='\0';
            break;
        }
        b[m+i]=a[i];
    }
    
    for (int i=0;i<=m;i++){
        if (i==m){
            a[n+i]='\0';
            break;
        }
        a[n+i]=b[i];
    }
    if (a==b){
        printf("true");
    }
    else{
        printf("false");
    }
    printf("\n%s\n%s",a,b);
    return 0;
}
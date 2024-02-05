#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    char a[100];
    char b[10]="Hello";
    scanf("%s",&a);
    int n=strlen(a);
    for (int i=0;i<=5;i++){
        if (i==n){
            a[n+i]='\0';
        }
        else{
            a[n+i]=b[i];
        }
        
    }
    printf("%s",a);
    return 0;
}
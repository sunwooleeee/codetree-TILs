#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
    // 여기에 코드를 작성해주세요.
    bool a,b=false;
    char kk[100];
    scanf("%s",&kk);
    for (int i=0;i<strlen(kk)-1;i++){
        if (kk[i]=='e' && kk[i+1]=='e'){
            a=true;
        }
        if (kk[i]=='a' && kk[i+1]=='b'){
            b=true;
        }
    }
    if (a){
        printf("Yes ");
    }
    else{
        printf("No ");
    }
    if (b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
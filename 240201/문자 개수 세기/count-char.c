#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    char str[101];
    char c;
    int cnt=0;
    fgets(str,101,stdin);
    scanf("%c",&c);
    for (int i=0;i<strlen(str);i++){
        if (str[i]==c){
            cnt+=1;
        }
    }
    printf("%d",cnt);
    return 0;
}
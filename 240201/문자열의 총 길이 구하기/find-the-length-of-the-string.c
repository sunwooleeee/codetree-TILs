#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int cnt=0;
    char arr[10][200];
    for (int i=0;i<10;i++){
        scanf("%s",&arr[i]);
        cnt+=strlen(arr[i]);
    }
    printf("%d",cnt);
    return 0;
}
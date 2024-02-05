#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    char arr[11][101];
    for (int i=0;i<n;i++){
        scanf("%s",&arr[i]);

    }
    for (int i=0;i<n;i++){
        int s=strlen(arr[i]);
        for (int j=0;j<s;j++){
            printf("%c",arr[i][j]);
        }
    }
    return 0;
}
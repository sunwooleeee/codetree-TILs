#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int cnt=0;
    int length=0;
    int n;
    scanf("%d",&n);
    char arr[10][101];
    for (int i=0;i<n;i++){
        scanf("%s",&arr[i]);
        length+=strlen(arr[i]);
        if (arr[i][0]=='a'){
            cnt+=1;
        }
    }
    printf("%d %d",length,cnt);
    return 0;
}
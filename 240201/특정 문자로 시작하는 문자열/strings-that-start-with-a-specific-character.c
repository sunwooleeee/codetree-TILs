#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int length=0;
    int cnt=0;
    int n;
    char arr[20][21];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%s",&arr[i]);
    }
    char c;
    scanf(" %c",&c);
    for (int i=0;i<n;i++){
        if (arr[i][0]==c){
            cnt+=1;
            length+=strlen(arr[i]);
        }
    }
    printf("%d %.2lf",cnt,(double)length/cnt);
    return 0;
}
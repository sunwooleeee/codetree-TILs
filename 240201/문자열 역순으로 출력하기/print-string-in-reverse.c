#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[4][100];
    for (int i=3;i>=0;i--){
        scanf("%s",&arr[i]);
    }
    for (int i=0;i<4;i++){
        printf("%s\n",arr[i]);
    }
    return 0;
}
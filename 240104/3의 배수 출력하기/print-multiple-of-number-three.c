#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i=1;
    int n;
    scanf("%d",&n);
    while (i*3<=n){
        printf("%d ",i*3);
        i++;
    }
    return 0;
}
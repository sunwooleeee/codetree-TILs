#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    char x='A';
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            if (x=='Z'){
                printf("%c",x);
                x='A';
            }
            else {
                printf("%c",x);
                x++;
                }
        }
        printf("\n");
    }
    return 0;
}
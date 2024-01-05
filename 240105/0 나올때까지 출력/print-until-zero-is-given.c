#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    while(true){
        scanf("%d",&a);
        if (a==0){
            break;
        }
        printf("%d\n",a);
    }
    return 0;
}
#include <stdio.h>
#include <stdiobool.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    while (true){
        scanf("%d",&n);
        if (n>25){
            printf("Higher");
        }
        else if (n<25){
            printf("Lower");
        }
        else{
            printf("Good");
        }
    }

    return 0;
}
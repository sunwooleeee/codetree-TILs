#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    if (a>b){
        int temp;
        temp=a;
        a=b;
        b=temp;

    }
    printf("%d",b-a);
    return 0;
}
#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt=0;
    int a;
    while (cnt<3){
        scanf("%d",&a);
        if (a%2==0){
            printf("%d\n",a/2);
            cnt++;
        }

    }
    return 0;
}
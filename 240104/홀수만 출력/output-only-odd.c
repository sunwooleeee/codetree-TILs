#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d%d",&a,&b);
    if (a%2==0){
        a+=1;
    }
    for (a;a<=b;a+=2){
        printf("%d ",a);
    }
    return 0;
}
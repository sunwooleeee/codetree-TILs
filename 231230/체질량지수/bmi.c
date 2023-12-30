#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d%d",&a,&b);
    int bmi;
    bmi=b/(a*a);
    printf("%d",bmi);
    if (bmi>=25) {
        printf("Obesity");
    }
    return 0;
}
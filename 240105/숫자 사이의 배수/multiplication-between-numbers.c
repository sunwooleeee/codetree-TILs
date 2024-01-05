#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=0;
    int cnt=0;
    for (a;a<=b;a++){
        if ((a%5==0) ||(a%7==0)){
            cnt++;
            sum+=a;
        }
    }
    printf("%d %.1lf",sum,(double)sum/cnt);
    return 0;
}
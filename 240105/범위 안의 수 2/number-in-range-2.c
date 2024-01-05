#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int sum=0;
    int cnt=0;
    int a;
    for (int i=1;i<=10;i++){
        scanf("%d",&a);
        if ((a>=0) &&(a<=200)){
            cnt++;
            sum+=a;
        }
    }
    printf("%d %.1lf",sum,(double)sum/cnt);
    return 0;
}
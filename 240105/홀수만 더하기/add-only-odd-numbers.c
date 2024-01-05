#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int a;
    int sum=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        scanf("%d",&a);
        if ((a%2!=0) && (a%3==0)){
            sum+=a;
        }
    }
    printf("%d",sum);
    return 0;
}
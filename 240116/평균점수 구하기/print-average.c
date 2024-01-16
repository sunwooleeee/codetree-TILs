#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    double sum=0.0;
    int cnt=0;
    double arr[8];
    for (int i=0;i<8;i++){
        scanf("%lf",&arr[i]);
        sum+=arr[i];
        cnt+=1;
    
    }
    printf("%.1lf",sum/cnt);
    return 0;
}
#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    double sum=0;
    double cnt=0;
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        double val;
        scanf("%lf",&val);
        sum+=val;
        cnt+=1;
    }
    printf("%.1lf\n",sum/cnt);
    if (sum/cnt>=4.0){
        printf("Perfect");
    }
    else if (sum/cnt>=3.0){
        printf("Good");
    }
    else{
        printf("Poor");
    }
    return 0;
}
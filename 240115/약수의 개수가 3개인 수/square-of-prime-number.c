#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int cnt_a=0;
    scanf("%d%d",&a,&b);
    for (int i=a;i<=b;i++){
        int cnt=0;
        for (int j=1;j<=i;j++){
            if (i%j==0){
                cnt+=1;
            }
        }
        if (cnt==3){
            cnt_a+=1;
        }
    }
    printf("%d",cnt_a);
    return 0;
}
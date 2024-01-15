#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int cnt=0;
    scanf("%d%d",&a,&b);
    for (a;a<=b;a++){
        int sum=0;
        for (int i=a-1;i>=1;i--){
            if (a%i==0){
                sum+=i;
                
            }
        }
        if (sum==a){
            cnt+=1;
        }
        
    }
    printf("%d",cnt);

    return 0;
}
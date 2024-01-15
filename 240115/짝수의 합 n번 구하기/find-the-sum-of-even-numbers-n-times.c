#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        int sum=0;
        for (a;a<=b;a++){
            if (a%2==0){
                sum+=a;
            }
        }
        printf("%d\n",sum);
    } 
    return 0;
}
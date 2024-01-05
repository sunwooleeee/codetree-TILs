#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int sum=0;
    if (a>=b){
        int temp=a;
        a=b;
        b=temp;
    }
    scanf("%d%d",&a,&b);
    for (a;a<=b;a++){
        if (a%5==0){
            sum+=a;
        }
    }
    printf("%d",sum);
    return 0;
}
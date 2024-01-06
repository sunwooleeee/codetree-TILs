#include <stdio.h>
#include <stdbool.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d%d",&a,&b);
    bool s1=false;
    for (a;a<=b;a++){
        if ((1920%a==0) && (2880%a==0)){
            s1=true;
            break;
        }
    }
    if (s1) {
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}
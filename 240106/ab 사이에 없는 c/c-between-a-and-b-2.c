#include <stdio.h>
#include <stdbool.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    bool s=true;
    scanf("%d%d",&a,&b);
    for (a;a<=b;a++){
        if (a%c==0){
            s=false;
            break;
        }
    }
    if (s){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
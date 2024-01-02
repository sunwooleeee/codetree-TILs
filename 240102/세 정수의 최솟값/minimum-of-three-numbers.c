#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a<=b){
        if (a<=c){
            printf(a);
        }
        else if (a>=c){
        printf(c);
        }
    }
    else if (a>=b){
        if (b>=c){
            printf(c);
        }
        else if (b<=c){
            printf(b);
        }
    } 
    return 0;
}
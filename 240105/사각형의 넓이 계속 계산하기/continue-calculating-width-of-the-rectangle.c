#include <stdio.h>
#include <stdbool.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    while (true){
        scanf("%d%d %c",&a,&b,&c);
        printf("%d\n",a*b);
        if (c=='C'){
            break;
        }


    }
    
    return 0;
}
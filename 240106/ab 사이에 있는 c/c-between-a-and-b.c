#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    bool satisfy=false;
    scanf("%d%d%d",&a,&b,&c);
    for (int i=a;i<=b;i++){
        if (i%c==0){
            satisfy=true;
        }
    }
    if (satisfy) {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
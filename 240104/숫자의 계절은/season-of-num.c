#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int m;
    scanf("%d",&m);
    if ((3<=m) && (m<=5)){
        printf("spring");
    }
    else if ((6<=m) && (m<=8)){
        printf("summer");
    }
    else if ((9<=m) && (m<=11)){
        printf("fall");
    }
    else {
        printf("winter");
    }
    return 0;
}
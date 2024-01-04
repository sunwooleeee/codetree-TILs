#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a1,a2;
    char s1,s2;
    scanf("%d %c",&a1,&s1);
    scanf("%d %c",&a2,&s2);
    if ((a1>=19) || (a2>=19)){
        if ((s1==M) || (s2==M)){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    else{
        printf("0");
    }
    return 0;
}
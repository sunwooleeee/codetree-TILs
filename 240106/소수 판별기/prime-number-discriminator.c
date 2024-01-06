#include <stdio.h>
#include <stdbool.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    bool s=true;
    scanf("%d",&n);
    for (int i=2;i<n;i++){
        if (n%i==0){
            s=false;
            break;
        }
    }
    if (s==true){
        printf("P");
    }
    else{
        printf("C");
    }
    return 0;
}
#include <stdio.h>
#include <stdbool.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    bool satisfy;
    scanf("%d",&n);
    for (int i=2;i<n;i++){
        if (n%i!=0){
            satisfy=true;
        }
    }
    if (satisfy==true){
        printf("C");
    }
    else{
        printf("N");
    }
    return 0;
}
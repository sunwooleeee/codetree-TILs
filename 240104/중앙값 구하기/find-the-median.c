#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    if (a>=b){
        if (b>=c){
            printf("%d",&b);
        }
        else if (c>=a){
            printf("%d",&a);
        }
        else{
            printf("%d",&c)
        }
    }
    else {
        if (c<=a){
            printf("%d",a);
        }
        else if (c>=b){
            printf("%d",b);
        
        }
        else{
            printf("%d",c);
        }
    }
    return 0;
}
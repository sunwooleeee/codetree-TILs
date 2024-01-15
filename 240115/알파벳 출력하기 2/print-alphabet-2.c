#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    char x='A';
    scanf("%d",&n);
    for (int i=n;i>=1;i--){
        for (int j=n-i;j>=1;j--){
            printf("  ");
        }
        
        for (int j=1;j<=i;j++){
            if (x=='Z'){
                printf("%c ",x);
                x='A';
            }
            else{
                printf("%c ",x);
                x++;
        
            }    
            }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (i%2==0){
                printf("%d ",i*n-j+1);
            }
            else{
                printf("%d ",(i-1)*n+j);
                
            }
        }
        printf("\n");
        
    }
    return 0;
}
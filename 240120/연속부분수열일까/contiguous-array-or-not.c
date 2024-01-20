#include <stdio.h>
#include <stdbool.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int n1,n2;
    bool TF=false;
    scanf("%d%d",&n1,&n2);
    int A[100];
    int B[100];
    for (int i=0;i<n1;i++){
        scanf("%d",&A[i]);
    }
    for (int i=0;i<n2;i++){
        scanf("%d",&B[i]);
    }
    for (int i=0;i<=n1-1;i++){
        if ((A[i]==B[0]) && (TF=false)){
            if ((n1-i)>=n2){
                int cnt=0;
                for (int j=i;j<=i+n2-1;j++){
                    if (A[j]==B[cnt]){
                        cnt+=1;
                        TF=true;
                        continue;
                    }
                    else{
                        TF=false;
                        break;
                    }
                }
            }
            else{
                break;
            }
        }
    }
    if (TF){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    return 0;
}
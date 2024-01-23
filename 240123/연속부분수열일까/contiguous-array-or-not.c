#include <stdio.h>
#include <stdbool.h>
int main() {
    // 여기에 코드를 작성해주세요.
    bool TF=false;
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int a[100],b[100];
    for (int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    for (int i=0;i<n1;i++){
        if ((a[i]==b[0]) && ((n1-i)>=n2)){
            int idx=0;
            for (int j=i;i<j+n2;j++){
                if (b[idx]==a[j]){
                    idx++;
                    continue;
                }
                else{
                    break;
                }
            }
            if (idx-1==n2){
                TF=true;
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
#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,q;
    int arr[100];
    scanf("%d%d",&n,&q);
    for (int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    for (int j=1;j<=q;j++){
        int a,b;
        scanf("%d%d",&a,&b);
        if (a==1){
            printf("%d\n",arr[b-1]);
        }
        else if (a==2){
            int cnt=0;
            for (int k=0;k<n;k++){
                if (arr[k]==b){
                    cnt+=1;
                    printf("%d\n",k+1);
                    break;
                }
            }
            if (cnt==0){
                printf("0\n");
            }
        }
        else if (a==3){
            int c;
            scanf("%d",&c);
            for (int x=b-1;x<=c-1;x++){
                printf("%d ",arr[x]);
            }
            printf("\n");
        }
    }
    return 0;
}
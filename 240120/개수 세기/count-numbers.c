#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    int cnt=0;
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        if (x==m){
            cnt+=1;
        }
    }
    printf("%d",cnt);
    return 0;
}
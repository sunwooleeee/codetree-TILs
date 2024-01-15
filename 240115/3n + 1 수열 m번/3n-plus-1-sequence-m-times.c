#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    
    int n;
    int m;
    scanf("%d",&m);
    for (int i=1;i<=m;i++){
    scanf("%d",&n);
    int cnt=0;
    while (n!=1){
        
        if (n%2==0){
            n=n/2;
            cnt+=1;
        }
        else{
            n=n*3+1;
            cnt+=1;
        }
    }
    printf("%d\n",cnt);}
    return 0;
}
#include <stdio.h>
#include <limits.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[1001]={0,};
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        int val;
        scanf("%d",&val);
        
        arr[val]+=1;
    }
    
    int max=INT_MIN;
    for (int i=0;i<=1000;i++){
        if (arr[i]==1 && max<i ){
            max=i;
        }
    }
    if (max==INT_MIN){
        printf("-1");
    }
    else{
        printf("%d",max);
    }
    return 0;
}
#include <stdio.h>
#include <limits.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int min_val=INT_MAX;    
    int arr[100];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if (min_val>=arr[i]){
            min_val=arr[i];
        }
    }
    int cnt=0;  
    for (int i=0;i<n;i++){
        if (min_val==arr[i]){
            cnt+=1;
        }
    }
    printf("%d %d",min_val,cnt);
    return 0;
}
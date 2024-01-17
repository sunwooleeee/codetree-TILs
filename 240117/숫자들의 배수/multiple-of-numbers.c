#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt=0;
    int i=0;
    int arr[100];
    scanf("%d",&n);
    while (cnt<2){
        arr[i]=n*(i+1);
        if ((i+1)%5==0){
            cnt+=1;
        }
        i++;
    }
    for (int j=0;j<i;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}
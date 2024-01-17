#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[4]={0,};
    int cnt=0;
    for (int i=0;i<3;i++){
        int b;
        char a;
        scanf(" %c %d",&a,&b);
        if ((a=='Y') && (b>=37)){
            arr[0]+=1;
            cnt+=1;
        }
        else if((a=='N')&&(b>=37)){
            arr[1]+=1;
        }
        else if((a=='Y')&&(b<37)){
            arr[2]+=1;
        }
        else if((a=='N')&&(b<37)){
            
            arr[3]+=1;
        }
    }
    for (int i=0;i<4;i++){
        printf("%d ",arr[i]);
    }
    if (cnt>=2){
        printf("E");
    }
    return 0;
}
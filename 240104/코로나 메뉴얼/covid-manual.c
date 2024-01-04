#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char c,c1,c2;
    int n,n1,n2;
    int cnt;
    cnt=0;
    scanf("%c %d\n%c %d\n%c %d",&c,&n,&c1,&n1,&c2,&n2);
    if ((c=='Y') && (n>=37)){
        cnt+=1;
    }
    if ((c1=='Y') && (n1>=37)){
        cnt+=1;
    }
    if ((c2=='Y') && (n2>=37)){
        cnt+=1;
    }
    if (cnt>=2){
        printf("E");
    }
    else{
        printf("N");
    }
    return 0;
}
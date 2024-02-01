#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[5][10]={ "apple", "banana", "grape", "blueberry", "orange"};
    char s;
    int cnt=0;
    scanf("%c",&s);
    for (int i=0;i<5;i++){
        if (arr[i][3]==s || arr[i][2]==s){
            printf("%s\n",arr[i]);
            cnt+=1;
        }
    }
    printf("%d",cnt);
    return 0;
}
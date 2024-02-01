#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    char s;
    char arr[10][100];
    for (int i=0;i<10;i++){
        scanf(" %s",&arr[i]);
    }

    scanf(" %c",&s);
   
    for (int i=0;i<10;i++){
        if ((arr[i][strlen(arr[i])-1])==s){
            printf("%s\n",arr[i]);
        }
    }
    return 0;
}
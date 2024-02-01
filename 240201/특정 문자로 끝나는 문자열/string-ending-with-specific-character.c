#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
    // 여기에 코드를 작성해주세요.
    bool TF=true;
    char s;
    char arr[10][100];
    for (int i=0;i<10;i++){
        scanf(" %s",&arr[i]);
    }

    scanf(" %c",&s);
   
    for (int i=0;i<10;i++){
        if ((arr[i][strlen(arr[i])-1])==s){
            printf("%s\n",arr[i]);
            TF=false;
        }
    }
    if (TF){
        printf("None");
    }
    return 0;
}
#include <stdio.h>
#include <string.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int aa,bb,cc;
    char a[100],b[100],c[100];
    scanf(" %s %s %s",&a,&b,&c);
    aa=strlen(a);
    bb=strlen(b);
    cc=strlen(c);
    if (aa>=cc){
        if (bb>=aa){
            printf("%d",bb-cc);
        }
        else if (bb>=cc){
            printf("%d",aa-cc);
        }
        else{
            printf("%d",aa-bb);
        }
    
    }
    else if (aa<=cc){
        if (bb>=cc){
            printf("%d",bb-aa);
        }
        else if (bb>=aa){
            printf("%d",cc-aa);
        }
        else{
            printf("%d",cc-bb);
        }
    
    }
    return 0;
}
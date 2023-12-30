#include <stdio.h>

int main() {
    int kg,cm;
    scanf("%d%d",&cm,&kg);
    double bmi;
    double m;
    m=(double)cm/100;
    bmi=kg/(m*m);
    printf("%d\n",(int)bmi);
    if ((int)bmi>=25){
        printf("Obesity");
    }
    
    
    return 0;
}
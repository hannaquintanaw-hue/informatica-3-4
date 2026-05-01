#include <stdio.h>
int main (void) {
    float F;
    printf("Enter temperature(Farhenheint):");
    scanf("%f",&F);
    float C=(F=32)/1.8;
    printf("%fF°= %fC°\n",F,C);
    
}

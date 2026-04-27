#include <stdio.h>
int main(void){

    int L;
    int W;
    printf("Lenght");
    scanf("%d", &L);
    printf("Width= ");
    scanf("%d", &W);
    int area= L*W;
    int perimeter=2*(L+W);
    printf("Area=%d\n",area);
    printf("Perimeter=%d\n",perimeter);

}


#include <stdio.h>
//1. Prototype
void c_to_f(void)
int main(void){
    //.3 Call
    c_to_f();

}
//2. Definition
void c_to_f(void){
    int c;
    printf("What is the temperature in Celsius?:");
    scanf("%d",&c);
    int f = (c*1.8)+32;
    printf("%d°C = %d°\n",c,f);
}

void f_to_c(void){
    int f;
    printf("What is the temperature in Fahrenheit?:");
    scanf("%d", &f);
    int c= (f-32)/1.8;
    printf("%d °F = %d°C\n",f,c);
    
}

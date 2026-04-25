#include <stdio.h>
int main(void)
{
    char yourname[80];
    printf("Enter you name: ");
    scanf("%s", &yourname);
    printf("Hello, %s! \n", yourname);
    char color[80];
    printf("Enter your favorite color: ");
    scanf("%s", &color);
    printf("Your favorite color is, %s!\n", color);

}



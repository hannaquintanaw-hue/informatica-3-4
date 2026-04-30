#include <stdio.h>
int main(void){
    int runningTime;
    printf("Enter movie running time: ");
    scanf("%d", &runningTime);
    int starHour;
    int starMin;
    printf("Start time:");
    scanf("%d:%d", &starHour, &starMin);

    int hours = runningTime/ 60;
    int minutes = runningTime% 60;

    int endHour = starHour + hours;
    int endMin = starMin + minutes;

    printf("The movie will last %d hr and %d min\n", hours, minutes);
    printf("End time; %d:%d\n", endHour, endMin);




}

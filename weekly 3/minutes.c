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

    if(endMin >=60) {
        endHour = endHour + (endMin /60); // Update value of endHour variable
        endMin = enMin %60;
    }

    printf("The movie will last %d hr and %d min\n", hours, minutes);
    printf("End time; %d:%02d\n", endHour, endMin);




}

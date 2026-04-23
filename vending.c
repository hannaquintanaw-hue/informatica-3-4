#include <stdio.h>
int main(void){
    //Create variables for first snack(Nopalitos)
    //Prices (3 items)
    // (Nopalitos)(Soda)(Water)
    float price1 = 159.99;
    float price2 = 20.99;
    float price3 = 15.99;
    // Quantity available
    int quantity1 = 14;
    int quantity2 = 20;
    int quantity3 = 20;
    //Selection code
    char code1 = 'N';
    char code2 = 'S';
    char code3 = 'W';
 //Menu format
 printf("My snaks\n");

 printf("-------------- \n");
 printf("Item name: Nopalitos\n");
 printf("Price: $%2f\n",price1);
 printf("Quantity available:%d\n",code1);
 printf("\n");
 Printf("Selection code:%c\n",code1);
 printf("Item name: Soda\n");
 printf("Price:$%2f\n",price2);
 printf("Quantity available:%d\n",code2);
 printf("\n");
 Printf("Selection code:%c\n",code2);
 printf("Item name: Water\n");
 printf("Price: $%2f\n",price3);
 printf("Quantity available:%d\n",code3);
 printf("\n");
 Printf("Selection code:%c\n",code3);
}

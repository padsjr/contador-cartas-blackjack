#include <stdio.h>
#include <stdlib.h>
int main()
{
    char card_name[3];
    int count = 0;
    while(card_name[0] != 'X'){
        puts("Enter the card_name: ");
        scanf("%2s", card_name);
        int val = 0;
        switch(card_name[0]){
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                continue;/*Pq nao utilizar o break se ele irá sair igual do loop, pq verificar de novo a condição antes?*/
            default:
                val = atoi(card_name);
                if((val < 1 ) || (val > 10)){
                    puts("I don't understand that value");
                }
                continue;
        }

        printf("The card value is: %i\n", val);
        /* check if the value os 3 to 6*/
        if ((val >2) && (val < 7)){
            puts("Count has gone up");
            count ++;
        }
        /* Check if the card was 10, J, Q, or K*/
        else if((val == 10)){
            puts("Count has gone up");
            count--;
        }
        printf("Current Count: %i\n", count);
}
    return 0;
}
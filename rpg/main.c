#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    //player stats
    int money = 0, cmd = 0, random_num;

    printf("Welcome to the Hundred Steps RPG\n");
    printf("Your commands are:\n 0: Quit, 1: Get $19 guranteed 2: 50 percent chance of getting 100 dollars or dying 3: Gamble 20 dollars for small chance of getting 1000\n");

    //main game loop
    for (int i = 0; i < 100; i++) {
        printf("You have %d steps left, and your current money is %d.\n\n", 100-i, money);

        printf("What would you like to do? ");
        scanf("%d", &cmd);

        switch(cmd) {
            case 0:
                return 0;
            case 1:
                money += 19;
                printf("You got 19 moneys\n");
                break;
            case 2:
                random_num = rand();
                if (random_num % 2 == 0) { printf("You survived.\n"); money += 100; } 
                else { printf("You fucking died.\n"); return 0; }
                break;
            case 3:
                if (money < 20) { printf("You don't have enough money.\n"); break; }
                random_num = rand();
                if (random_num % 10 == 0) { printf("YOU WON!\n"); money += 1000; } 
                else { printf("You lost.\n"); money -= 20; }
                break;
         
        }
    }
    printf("You are out of steps\n");
    return 0;
}
/*
 *
 *         if (strcmp(cmd, "quit") == 0) {
 return 0;
 } else if (strcmp(cmd, "gift") == 0) {
 money += 10;
 }
 */

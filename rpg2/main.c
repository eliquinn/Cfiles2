#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void printbox(int *pos, int *food) {
    for (int r = 0; r < 10; r++) {
        for (int c = 0; c < 10; c++) {
            //drawing time
            //is it the character
            if ((r  == pos[0]) && (c == pos[1])) {
                printf("o");
            } 
            //OR, IS IT THE BAGEL?
            else if ((r == food[0]) && (c == food[1])) {
                printf("F");
            } else { printf("."); }
        }
        printf("\n");
    }
}

int main()
{
    srand(time(NULL));
    //player stats
    int foods = 0;
    int pos[2] = {2, 1};
    int food[2] = {5, 6};
    char cmd = 'z';

    while(1) {
        printbox(pos, food);
        printf("\nYou have %d foods. Which direction? (u)p (d)own (l)eft (r)right (q)uit\n", foods);
        scanf("%c", &cmd);

        switch(cmd) {
            case 'q':
                return 0;
            case 'r':
                pos[1] += 1;
                break;
            case 'l':
                pos[1] -= 1;
                break;
            case 'u':
                pos[0] -= 1;
                break;
            case 'd':
                pos[0] += 1;
                break;
        }
        //if the player has found food
        if ((pos[0] == food[0]) && (pos[1] == food[1])) {
                printf("You found food.\n");
                foods += 1;
                //give the food a new random position
                food[0] = (rand() % 8) + 1;
                food[1] = (rand() % 8) + 1;
        } 
    }
    return 0;
}

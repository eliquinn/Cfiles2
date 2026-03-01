#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void printbox(int *pos, int *food, int *enemy) {
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
            } 
            //enemy
            else if ((r == enemy[0]) && (c == enemy[1])) {
                printf("e");
            }
            else { printf("."); }
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
    int oldpos[2] = {0, 0};
    int food[2] = {5, 6};
    int enemy[2] = {9, 9};
    char cmd = 'z';

    while(1) {
        printbox(pos, food, enemy);
        printf("\nYou have %d foods. Which direction? (u)p (d)own (l)eft (r)right (q)uit\n", foods);
        scanf(" %c", &cmd);
        //the position and old position are the same
        oldpos[0] = pos[0];
        oldpos[1] = pos[1];

        //something here should change the position
        switch(cmd) {
            default:
                continue;
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
        //the enemy's coordingates should become the old position
        enemy[0] = oldpos[0];
        enemy[1] = oldpos[1];
        //if the player has found food
        if ((pos[0] == food[0]) && (pos[1] == food[1])) {
                printf("You found food.\n");
                foods += 1;
                //give the food a new random position
                food[0] = (rand() % 8) + 1;
                food[1] = (rand() % 8) + 1;
        } 
        //if the player has hit an enemy
        if ((pos[0] == enemy[0]) && (pos[1] == enemy[1])) {
                printf("You died.\n");
                return 0;
        }
 
    }
    return 0;
}

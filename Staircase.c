
void staircase(int n) {
    for(int i = 0; i < n; i++) {
        for(int b = 1; b < n-i; b++) {
            printf(" ");
        }
        printf("#");
        for(int x = 0; x < i; x++) {
            printf("#");
        }
        printf("\n");
    } 
}


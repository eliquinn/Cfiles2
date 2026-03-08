#include <stdio.h>


int col(int n) {
    if (n % 2 == 0) {
        return n/2;
    } else {
        return 3*n + 1;
    }
}

int main() 
{
    int num = 1000;
    for (int i = 0; i < 1000; i++) {
        num = col(num);
        printf("%d-", num);
    }
    return 0; 
}



#include <stdio.h>

typedef unsigned long long int number;

number col(number n) {
    if (n % 2 == 0) {
        return n/2;
    } else {
        return 3*n + 1;
    }
}

int main() 
{
    number num = 670617279;
    for (int i = 0; i < 1000; i++) {
        num = col(num);
        printf("%llu-", num);
    }
    return 0; 
}



#include <stdio.h>

int result = 0;

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main() 
{
    result = add(3, 4);
    return 0;
}

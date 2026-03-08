#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num = 0;
    printf("How many characters do you want\n");
    scanf("%d", &num);

    char *ptr_str = malloc((num + 1) * sizeof(char));
    
    if (ptr_str == NULL) {
        perror("malloc failed");
        return EXIT_FAILURE;
    }

    printf("Now type them\n");
    scanf("%s", ptr_str);
    printf("You said %s", ptr_str); 
    printf("\n%s", ptr_str);
    free(ptr_str);
    ptr_str = NULL; 
    return 0;
}

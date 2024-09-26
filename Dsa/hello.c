#include <stdio.h>

main() {
    int i, j;
    char a[10] = "DSAB3456";  // 'a' is initialized with the string "DSAB3456"
    for (i = 0, j = 8; i < j; a[i++] = a[j--]);  // Main logic: swapping characters
    printf("Output is %s", a);  // Printing the modified array
    return 0;
}

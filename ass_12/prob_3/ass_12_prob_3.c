#include <stdio.h>
#include <string.h>

int main() {
    char main_str[100], sub_str[100];
    printf("string: ");
    scanf("%s", main_str);
    printf("sub-string: ");
    scanf("%s", sub_str);
    char *ptr = strstr(main_str, sub_str);

    printf("Answer: ");
    if (ptr != NULL) {
        
        int position = (int)(ptr - main_str) + 1;
        printf("%d\n", position);
    } else {
        printf("Sub-string not found\n");
    }

    return 0;
}
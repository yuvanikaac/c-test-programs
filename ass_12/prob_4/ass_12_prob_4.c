#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i = 0, in_word = 0;
    printf("string: ");
    gets(str);

   
    while (str[i] != '\0') {
        
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            in_word = 0; // We are outside a word
        } 
        else if (in_word == 0) {
            in_word = 1; 
            count++;     
        }
        i++;
    }

    printf("Answer : %d\n", count);

    return 0;
}
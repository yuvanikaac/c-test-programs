#include <stdio.h>
#include <string.h>
void getnumbers(char number1[], char number2[]) {
    printf("Enter first number: ");
    scanf("%s", number1);
    printf("Enter second number: ");
    scanf("%s", number2);
}
void multiplynumbers(char number1[], char number2[], char result[]) {
    int len1 = strlen(number1);
    int len2 = strlen(number2);
    int pos[200] = {0};
    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (number1[i] - '0') * (number2[j] - '0');
            int sum = mul + pos[i + j + 1];
            
            pos[i + j + 1] = sum % 10;
            pos[i + j] += sum / 10;
        }
    }

    int i = 0;
    while (i < len1 + len2 && pos[i] == 0) {
        i++;
    }

    int idx = 0;
    if (i == len1 + len2) {
        result[idx++] = '0';
    } else {
        while (i < len1 + len2) {
            result[idx++] = pos[i++] + '0';
        }
    }
    result[idx] = '\0';
}
void print(char result[]) {
    printf("Result: %s\n", result);
}

int main()
{
    char number1[105], number2[105], result[210];

    getnumbers(number1, number2);
    multiplynumbers(number1, number2, result);
    print(result);
    
    return 0;
}
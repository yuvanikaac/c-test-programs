#include <stdio.h>
#include <string.h>
void getnumbers(char num1[], char num2[]) {
    printf("Enter first number (up to 50 digits): ");
    scanf("%s", num1);
    printf("Enter second number (up to 50 digits): ");
    scanf("%s", num2);
}

void addnumbers(char num1[], char num2[], char res[]) {
    int i = strlen(num1) - 1;
    int j = strlen(num2) - 1;
    int carry = 0;
    char temp[60];
    int tIdx = 0;
    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        if (i >= 0) {
            sum += num1[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += num2[j] - '0';
            j--;
        }
        carry = sum / 10;
        temp[tIdx++] = (sum % 10) + '0';
    }
    temp[tIdx] = '\0';

    for (int idx = 0; idx < tIdx; idx++) {
        res[idx] = temp[tIdx - 1 - idx];
    }
    res[tIdx] = '\0';
}

void print(char res[]) {
    printf("Sum = %s\n", res);
}

int main() {
    char number1[60], number2[60], result[60];
    
    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
    print(result);
    
    return 0;
}
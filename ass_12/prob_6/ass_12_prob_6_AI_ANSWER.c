
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int valid_number(char num[])
{
    int i, len = strlen(num);

    if(len == 0 || len > 50)
        return 0;

    for(i = 0; i < len; i++)
    {
        if(!isdigit((unsigned char)num[i]))
            return 0;
    }

    return 1;
}

void remove_zeros(char num[])
{
    int i = 0;

    while(num[i] == '0' && num[i + 1] != '\0')
        i++;

    if(i > 0)
        memmove(num, num + i, strlen(num + i) + 1);
}

int compare(char a[], char b[])
{
    int len1 = strlen(a);
    int len2 = strlen(b);

    if(len1 > len2)
        return 1;

    if(len1 < len2)
        return -1;

    return strcmp(a, b);
}

void add_numbers(char a[], char b[], char result[])
{
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int k = 0, sum, carry = 0;
    char temp[102];

    while(i >= 0 || j >= 0 || carry > 0)
    {
        sum = carry;

        if(i >= 0)
            sum += a[i--] - '0';

        if(j >= 0)
            sum += b[j--] - '0';

        temp[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }

    for(i = 0; i < k; i++)
        result[i] = temp[k - 1 - i];

    result[k] = '\0';
}

void subtract_numbers(char a[], char b[], char result[])
{
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int k = 0, digit, borrow = 0;
    char temp[102];

    while(i >= 0)
    {
        digit = (a[i] - '0') - borrow;

        if(j >= 0)
            digit -= b[j] - '0';

        if(digit < 0)
        {
            digit += 10;
            borrow = 1;
        }
        else
        {
            borrow = 0;
        }

        temp[k++] = digit + '0';
        i--;
        j--;
    }

    while(k > 1 && temp[k - 1] == '0')
        k--;

    for(i = 0; i < k; i++)
        result[i] = temp[k - 1 - i];

    result[k] = '\0';
}

void multiply_numbers(char a[], char b[], char result[])
{
    int digits[101] = {0};
    int len1 = strlen(a);
    int len2 = strlen(b);
    int i, j, len;

    for(i = 0; i < len1; i++)
    {
        for(j = 0; j < len2; j++)
        {
            digits[i + j] +=
                (a[len1 - 1 - i] - '0') *
                (b[len2 - 1 - j] - '0');
        }
    }

    for(i = 0; i < len1 + len2; i++)
    {
        digits[i + 1] += digits[i] / 10;
        digits[i] %= 10;
    }

    len = len1 + len2;

    while(len > 1 && digits[len - 1] == 0)
        len--;

    for(i = 0; i < len; i++)
        result[i] = digits[len - 1 - i] + '0';

    result[len] = '\0';
}

void divide_numbers(char a[], char b[],
                    char quotient[], char remainder[])
{
    int i, count;
    char temp[102];

    strcpy(remainder, "0");

    for(i = 0; a[i] != '\0'; i++)
    {
        if(strcmp(remainder, "0") == 0)
        {
            remainder[0] = a[i];
            remainder[1] = '\0';
        }
        else
        {
            int len = strlen(remainder);
            remainder[len] = a[i];
            remainder[len + 1] = '\0';
        }

        remove_zeros(remainder);

        count = 0;

        while(compare(remainder, b) >= 0)
        {
            subtract_numbers(remainder, b, temp);
            strcpy(remainder, temp);
            count++;
        }

        quotient[i] = count + '0';
    }

    quotient[i] = '\0';

    remove_zeros(quotient);
    remove_zeros(remainder);
}

int main()
{
    char line[256];
    char number1[52], number2[52];
    char result[102], remainder[102];
    char op, extra;
    int count, cmp;

    while(1)
    {
        printf("Calc> ");

        if(fgets(line, sizeof(line), stdin) == NULL)
            break;

        line[strcspn(line, "\n")] = '\0';

        if(strcmp(line, "Exit") == 0)
        {
            printf("Calculator closed.\n");
            break;
        }

        count = sscanf(line, "%51s %c %51s %c",
                       number1, &op, number2, &extra);

        if(count != 3)
        {
            printf("Invalid input.\n");
            continue;
        }

        if(!valid_number(number1) ||
           !valid_number(number2))
        {
            printf("Invalid number. Enter up to 50 digits.\n");
            continue;
        }

        remove_zeros(number1);
        remove_zeros(number2);

        if(op != '+' && op != '-' &&
           op != '*' && op != '/')
        {
            printf("Invalid operator.\n");
            continue;
        }

        if(op == '/' && strcmp(number2, "0") == 0)
        {
            printf("Error: Division by zero.\n");
            continue;
        }

        if(op == '+')
        {
            add_numbers(number1, number2, result);
            printf("%s\n", result);
        }
        else if(op == '-')
        {
            cmp = compare(number1, number2);

            if(cmp >= 0)
            {
                subtract_numbers(number1, number2, result);
            }
            else
            {
                subtract_numbers(number2, number1, result);

                if(strcmp(result, "0") != 0)
                {
                    memmove(result + 1, result,
                            strlen(result) + 1);
                    result[0] = '-';
                }
            }

            printf("%s\n", result);
        }
        else if(op == '*')
        {
            multiply_numbers(number1, number2, result);
            printf("%s\n", result);
        }
        else if(op == '/')
        {
            divide_numbers(number1, number2,
                           result, remainder);

            printf("Quotient = %s\n", result);
            printf("Remainder = %s\n", remainder);
        }
    }

    return 0;
}

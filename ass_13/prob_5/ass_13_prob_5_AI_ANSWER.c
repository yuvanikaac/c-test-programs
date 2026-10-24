
#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *top = NULL;

void push()
{
    struct student *newnode;

    newnode = (struct student *)malloc(sizeof(struct student));

    if(newnode == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter student ID: ");
    scanf("%d", &newnode->id);

    printf("Enter Maths mark: ");
    scanf("%d", &newnode->Maths);

    printf("Enter Science mark: ");
    scanf("%d", &newnode->Science);

    newnode->next = top;
    top = newnode;

    printf("Entry pushed successfully.\n");
}

void pop()
{
    struct student *temp;

    if(top == NULL)
    {
        printf("Stack is empty.\n");
        return;
    }

    temp = top;

    printf("Popped entry:\n");
    printf("ID: %d\n", temp->id);
    printf("Maths: %d\n", temp->Maths);
    printf("Science: %d\n", temp->Science);

    top = top->next;
    free(temp);
}

void display()
{
    struct student *temp = top;

    if(top == NULL)
    {
        printf("Stack is empty.\n");
        return;
    }

    printf("\nStack from top to bottom:\n");

    while(temp != NULL)
    {
        printf("ID: %d, Maths: %d, Science: %d\n",
               temp->id, temp->Maths, temp->Science);

        temp = temp->next;
    }
}

int main()
{
    int choice;
    struct student *temp;

    while(1)
    {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            push();
        }
        else if(choice == 2)
        {
            pop();
        }
        else if(choice == 3)
        {
            display();
        }
        else if(choice == 4)
        {
            break;
        }
        else
        {
            printf("Invalid choice.\n");
        }
    }

    while(top != NULL)
    {
        temp = top;
        top = top->next;
        free(temp);
    }

    return 0;
}

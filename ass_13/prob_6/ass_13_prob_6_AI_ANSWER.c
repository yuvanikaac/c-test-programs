
#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *front = NULL;
struct student *rear = NULL;

void add()
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

    newnode->next = NULL;

    if(front == NULL)
    {
        front = newnode;
        rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }

    printf("Entry added successfully.\n");
}

void remove_entry()
{
    struct student *temp;

    if(front == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }

    temp = front;

    printf("Removed entry:\n");
    printf("ID: %d\n", temp->id);
    printf("Maths: %d\n", temp->Maths);
    printf("Science: %d\n", temp->Science);

    front = front->next;

    if(front == NULL)
    {
        rear = NULL;
    }

    free(temp);
}

void display()
{
    struct student *temp = front;

    if(front == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("\nQueue from top to bottom:\n");

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

    while(1)
    {
        printf("\n--- QUEUE MENU ---\n");
        printf("1. Add\n");
        printf("2. Remove\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            add();
        }
        else if(choice == 2)
        {
            remove_entry();
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

    while(front != NULL)
    {
        struct student *temp = front;
        front = front->next;
        free(temp);
    }

    return 0;
}

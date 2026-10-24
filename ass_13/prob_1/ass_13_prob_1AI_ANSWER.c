
#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    int Maths;
    int Science;
    struct student *next;
};

int main()
{
    struct student *head = NULL;
    struct student *newnode, *temp;
    int id;

    while(1)
    {
        printf("Enter student ID (-1 to stop): ");
        scanf("%d", &id);

        if(id == -1)
        {
            break;
        }

        newnode = (struct student *)malloc(sizeof(struct student));

        if(newnode == NULL)
        {
            printf("Memory allocation failed.\n");
            return 1;
        }

        newnode->id = id;

        printf("Enter Maths mark: ");
        scanf("%d", &newnode->Maths);

        printf("Enter Science mark: ");
        scanf("%d", &newnode->Science);

        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newnode;
        }
    }

    printf("\nStudent Details:\n");

    temp = head;

    if(temp == NULL)
    {
        printf("No student records entered.\n");
    }

    while(temp != NULL)
    {
        printf("\nStudent ID: %d\n", temp->id);
        printf("Maths Mark: %d\n", temp->Maths);
        printf("Science Mark: %d\n", temp->Science);

        temp = temp->next;
    }

    temp = head;

    while(temp != NULL)
    {
        struct student *nextnode = temp->next;
        free(temp);
        temp = nextnode;
    }

    return 0;
}

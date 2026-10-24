
#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *head = NULL;

void insert_entry()
{
    struct student *newnode, *temp, *prev;
    int search_id, choice;

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

    if(head == NULL)
    {
        head = newnode;
        printf("Entry inserted successfully.\n");
        return;
    }

    printf("Enter ID to insert before or after: ");
    scanf("%d", &search_id);

    printf("1. Insert Before\n");
    printf("2. Insert After\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    temp = head;
    prev = NULL;

    while(temp != NULL && temp->id != search_id)
    {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Student ID not found.\n");
        free(newnode);
        return;
    }

    if(choice == 1)
    {
        newnode->next = temp;

        if(temp == head)
            head = newnode;
        else
            prev->next = newnode;

        printf("Entry inserted before ID %d.\n", search_id);
    }
    else if(choice == 2)
    {
        newnode->next = temp->next;
        temp->next = newnode;

        printf("Entry inserted after ID %d.\n", search_id);
    }
    else
    {
        printf("Invalid choice.\n");
        free(newnode);
    }
}

void delete_entry()
{
    struct student *temp, *prev;
    int id;

    if(head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("Enter student ID to delete: ");
    scanf("%d", &id);

    temp = head;
    prev = NULL;

    while(temp != NULL && temp->id != id)
    {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Student ID not found.\n");
        return;
    }

    if(temp == head)
        head = head->next;
    else
        prev->next = temp->next;

    free(temp);

    printf("Entry deleted successfully.\n");
}

void display_list()
{
    struct student *temp = head;

    if(temp == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("\nStudent Details:\n");

    while(temp != NULL)
    {
        printf("ID: %d, Maths: %d, Science: %d\n",
               temp->id, temp->Maths, temp->Science);

        temp = temp->next;
    }
}

int main()
{
    struct student *newnode, *temp;
    int i, choice;

    printf("Enter details of 5 students:\n");

    for(i = 1; i <= 5; i++)
    {
        newnode = (struct student *)malloc(sizeof(struct student));

        if(newnode == NULL)
        {
            printf("Memory allocation failed.\n");
            return 1;
        }

        printf("\nEnter student ID: ");
        scanf("%d", &newnode->id);

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
                temp = temp->next;

            temp->next = newnode;
        }
    }

    while(1)
    {
        printf("\n--- MENU ---\n");
        printf("1. Insert Entry\n");
        printf("2. Delete Entry\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1)
            insert_entry();
        else if(choice == 2)
            delete_entry();
        else if(choice == 3)
            display_list();
        else if(choice == 4)
            break;
        else
            printf("Invalid choice.\n");
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

#include <stdio.h>
#include <stdlib.h>

// Define the student structure
struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

// Function to add a new student node at the end of the linked list
void insertStudent(struct student **head, int id, int maths, int science) {
    struct student *newNode = (struct student *)malloc(sizeof(struct student));
    newNode->id = id;
    newNode->Maths = maths;
    newNode->Science = science;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct student *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to display all the entries in the linked list
void displayStudents(struct student *head) {
    struct student *temp = head;
    if (temp == NULL) {
        printf("\nNo entries to display.\n");
        return;
    }

    printf("\n--- Student Records ---\n");
    while (temp != NULL) {
        printf("ID: %d | Maths: %d | Science: %d\n", temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}

int main() {
    struct student *head = NULL;
    int id, maths, science;

    printf("Enter student details. Enter -1 for ID to stop.\n");

    while (1) {
        printf("\nEnter Student ID: ");
        scanf("%d", &id);

        // Exit input mode if id is -1
        if (id == -1) {
            break;
        }

        printf("Enter Maths Mark: ");
        scanf("%d", &maths);

        printf("Enter Science Mark: ");
        scanf("%d", &science);

        // Insert into the linked list
        insertStudent(&head, id, maths, science);
    }

    // Display all entries
    displayStudents(head);

    // Free allocated memory
    struct student *current = head;
    struct student *nextVal;
    while (current != NULL) {
        nextVal = current->next;
        free(current);
        current = nextVal;
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

// Function to create a new node
struct student* createNode(int id, int maths, int science) {
    struct student *newNode = (struct student *)malloc(sizeof(struct student));
    newNode->id = id;
    newNode->Maths = maths;
    newNode->Science = science;
    newNode->next = NULL;
    return newNode;
}

// Push operation: inserts the entry at the top of the list
void push(struct student **top) {
    int id, maths, science;
    printf("Enter Student ID: ");
    scanf("%d", &id);
    printf("Enter Maths Mark: ");
    scanf("%d", &maths);
    printf("Enter Science Mark: ");
    scanf("%d", &science);

    struct student *newNode = createNode(id, maths, science);
    newNode->next = *top;
    *top = newNode;
    printf("Successfully pushed entry onto the stack.\n");
}

// Pop operation: gets top of the list, displays it, and removes it
void pop(struct student **top) {
    if (*top == NULL) {
        printf("\nStack Underflow! The stack is empty.\n");
        return;
    }

    struct student *temp = *top;
    printf("\n--- Popped Entry ---\n");
    printf("ID: %d | Maths: %d | Science: %d\n", temp->id, temp->Maths, temp->Science);

    *top = temp->next;
    free(temp);
}

// Display Stack operation: shows from top to bottom
void displayStack(struct student *top) {
    if (top == NULL) {
        printf("\nThe stack is empty.\n");
        return;
    }

    printf("\n--- Stack (Top to Bottom) ---[cite: 5]\n");
    struct student *temp = top;
    while (temp != NULL) {
        printf("ID: %d | Maths: %d | Science: %d\n", temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}

int main() {
    struct student *top = NULL;
    int choice;

    do {
        // Menu Items[cite: 5]
        printf("\n--- Menu Items ---\n");
        printf("1. Push[cite: 5]\n");
        printf("2. Pop[cite: 5]\n");
        printf("3. Display Stack[cite: 5]\n");
        printf("4. Exit[cite: 5]\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push(&top);
                break;
            case 2:
                pop(&top);
                break;
            case 3:
                displayStack(top);
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    // Free allocated memory before exit
    struct student *current = top;
    struct student *nextVal;
    while (current != NULL) {
        nextVal = current->next;
        free(current);
        current = nextVal;
    }

    return 0;
}
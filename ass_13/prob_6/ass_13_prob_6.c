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

// Add function: inserts the entry at the top of the list
void add(struct student **head) {
    int id, maths, science;
    printf("Enter Student ID: ");
    scanf("%d", &id);
    printf("Enter Maths Mark: ");
    scanf("%d", &maths);
    printf("Enter Science Mark: ");
    scanf("%d", &science);

    struct student *newNode = createNode(id, maths, science);
    newNode->next = *head;
    *head = newNode;
    printf("Entry successfully added at the top of the list.\n");
}

// Remove function: gets the bottom of the list, displays it, and removes it
void removeEntry(struct student **head) {
    if (*head == NULL) {
        printf("\nQueue Underflow! The queue is empty.\n");
        return;
    }

    struct student *temp = *head;
    
    // If there is only one node in the list
    if (temp->next == NULL) {
        printf("\n--- Removed Entry (from bottom) ---\n");
        printf("ID: %d | Maths: %d | Science: %d\n", temp->id, temp->Maths, temp->Science);
        free(temp);
        *head = NULL;
        return;
    }

    // Traverse to the second last node to find the bottom node
    struct student *prev = NULL;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    printf("\n--- Removed Entry (from bottom) ---\n");
    printf("ID: %d | Maths: %d | Science: %d\n", temp->id, temp->Maths, temp->Science);

    prev->next = NULL;
    free(temp);
}

// Display function: shows from top to bottom[cite: 6]
void displayStack(struct student *head) {
    if (head == NULL) {
        printf("\nThe queue is empty.\n");
        return;
    }

    printf("\n--- Queue (Top to Bottom) ---[cite: 6]\n");
    struct student *temp = head;
    while (temp != NULL) {
        printf("ID: %d | Maths: %d | Science: %d\n", temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}

int main() {
    struct student *head = NULL;
    int choice;

    do {
        // Menu Items[cite: 6]
        printf("\n--- Menu Items ---\n");
        printf("1. Add[cite: 6]\n");
        printf("2. Remove[cite: 6]\n");
        printf("3. Display Stack[cite: 6]\n");
        printf("4. Exit[cite: 6]\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add(&head);
                break;
            case 2:
                removeEntry(&head);
                break;
            case 3:
                displayStack(head);
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    // Free allocated memory before exit
    struct student *current = head;
    struct student *nextVal;
    while (current != NULL) {
        nextVal = current->next;
        free(current);
        current = nextVal;
    }

    return 0;
}
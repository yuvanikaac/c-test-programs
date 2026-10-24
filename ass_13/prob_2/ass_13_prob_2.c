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

// Function to create a sample linked list with 5 entries
void initializeList(struct student **head) {
    *head = createNode(1, 85, 90);
    (*head)->next = createNode(2, 78, 88);
    (*head)->next->next = createNode(3, 92, 95);
    (*head)->next->next->next = createNode(4, 74, 80);
    (*head)->next->next->next->next = createNode(5, 88, 82);
}

// Function to display the list
void displayList(struct student *head) {
    struct student *temp = head;
    if (temp == NULL) {
        printf("\nThe list is empty.\n");
        return;
    }
    printf("\n--- Student Linked List Entries ---\n");
    while (temp != NULL) {
        printf("ID: %d | Maths: %d | Science: %d\n", temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}

// Function to insert a new entry before or after a given ID
void insertEntry(struct student **head) {
    int targetId, choice, id, maths, science;
    
    printf("Enter the target ID: ");
    scanf("%d", &targetId);
    
    printf("Where do you want to insert?\n1. Before the given ID\n2. After the given ID\nEnter choice: ");
    scanf("%d", &choice);
    
    printf("Enter new Student ID: ");
    scanf("%d", &id);
    printf("Enter Maths Mark: ");
    scanf("%d", &maths);
    printf("Enter Science Mark: ");
    scanf("%d", &science);
    
    struct student *newNode = createNode(id, maths, science);
    
    if (choice == 1) {
        // Insertion before the given ID
        if (*head == NULL) {
            printf("List is empty.\n");
            free(newNode);
            return;
        }
        
        if ((*head)->id == targetId) {
            newNode->next = *head;
            *head = newNode;
            printf("Entry successfully inserted before ID %d.\n", targetId);
            return;
        }
        
        struct student *temp = *head;
        while (temp->next != NULL && temp->next->id != targetId) {
            temp = temp->next;
        }
        
        if (temp->next == NULL) {
            printf("Target ID %d not found.\n", targetId);
            free(newNode);
        } else {
            newNode->next = temp->next;
            temp->next = newNode;
            printf("Entry successfully inserted before ID %d[cite: 2].\n", targetId);
        }
    } else if (choice == 2) {
        // Insertion after the given ID
        struct student *temp = *head;
        while (temp != NULL && temp->id != targetId) {
            temp = temp->next;
        }
        
        if (temp == NULL) {
            printf("Target ID %d not found.\n", targetId);
            free(newNode);
        } else {
            newNode->next = temp->next;
            temp->next = newNode;
            printf("Entry successfully inserted after ID %d[cite: 2].\n", targetId);
        }
    } else {
        printf("Invalid choice!\n");
        free(newNode);
    }
}

int main() {
    struct student *head = NULL;
    
    // Initialize sample link list with about 5 entries[cite: 2]
    initializeList(&head);
    
    int choice;
    do {
        // Menu Items[cite: 2]
        printf("\n--- Menu Items ---\n");
        printf("1. Insert Entry[cite: 2]\n");
        printf("2. Display List[cite: 2]\n");
        printf("3. Exit[cite: 2]\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                insertEntry(&head);
                break;
            case 2:
                displayList(head);
                break;
            case 3:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);
    
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
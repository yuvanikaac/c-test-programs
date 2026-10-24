#include <stdio.h>
#include <stdlib.h>

// Structure definition for doubly linked list
struct student {
    struct student *prev;
    int id;
    int Maths;
    int Science;
    struct student *next;
};

// Function to create a new node
struct student* createNode(int id, int maths, int science) {
    struct student *newNode = (struct student *)malloc(sizeof(struct student));
    newNode->prev = NULL;
    newNode->id = id;
    newNode->Maths = maths;
    newNode->Science = science;
    newNode->next = NULL;
    return newNode;
}

// Function to create a sample doubly linked list with about 5 entries
void initializeList(struct student **head) {
    *head = createNode(1, 85, 90);
    struct student *node2 = createNode(2, 78, 88);
    struct student *node3 = createNode(3, 92, 95);
    struct student *node4 = createNode(4, 74, 80);
    struct student *node5 = createNode(5, 88, 82);

    (*head)->next = node2;
    node2->prev = *head;
    
    node2->next = node3;
    node3->prev = node2;
    
    node3->next = node4;
    node4->prev = node3;
    
    node4->next = node5;
    node5->prev = node4;
}

// Function to display the list
void displayList(struct student *head) {
    struct student *temp = head;
    if (temp == NULL) {
        printf("\nThe list is empty.\n");
        return;
    }
    printf("\n--- Student Doubly Linked List Entries ---\n");
    while (temp != NULL) {
        printf("ID: %d | Maths: %d | Science: %d\n", temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}

// Function to insert a new entry before or after a given id
void insertEntry(struct student **head) {
    int targetId, choice, id, maths, science;
    
    printf("Enter the target id: ");
    scanf("%d", &targetId);
    
    printf("Where do you want to insert?\n1. Before the given id\n2. After the given id\nEnter choice: ");
    scanf("%d", &choice);
    
    printf("Enter new Student id: ");
    scanf("%d", &id);
    printf("Enter Maths Mark: ");
    scanf("%d", &maths);
    printf("Enter Science Mark: ");
    scanf("%d", &science);
    
    struct student *newNode = createNode(id, maths, science);
    
    if (choice == 1) {
        // Insertion before the given id
        if (*head == NULL) {
            printf("List is empty.\n");
            free(newNode);
            return;
        }
        
        if ((*head)->id == targetId) {
            newNode->next = *head;
            (*head)->prev = newNode;
            *head = newNode;
            printf("Entry successfully inserted before id %d.\n", targetId);
            return;
        }
        
        struct student *temp = *head;
        while (temp != NULL && temp->id != targetId) {
            temp = temp->next;
        }
        
        if (temp == NULL) {
            printf("Target id %d not found.\n", targetId);
            free(newNode);
        } else {
            newNode->next = temp;
            newNode->prev = temp->prev;
            temp->prev->next = newNode;
            temp->prev = newNode;
            printf("Entry successfully inserted before id %d[cite: 4].\n", targetId);
        }
    } else if (choice == 2) {
        // Insertion after the given id[cite: 4]
        struct student *temp = *head;
        while (temp != NULL && temp->id != targetId) {
            temp = temp->next;
        }
        
        if (temp == NULL) {
            printf("Target id %d not found.\n", targetId);
            free(newNode);
        } else {
            newNode->next = temp->next;
            newNode->prev = temp;
            if (temp->next != NULL) {
                temp->next->prev = newNode;
            }
            temp->next = newNode;
            printf("Entry successfully inserted after id %d[cite: 4].\n", targetId);
        }
    } else {
        printf("Invalid choice!\n");
        free(newNode);
    }
}

// Function to delete an entry of a given id[cite: 4]
void deleteEntry(struct student **head) {
    int targetId;
    printf("Enter the id of the entry to delete: ");
    scanf("%d", &targetId);
    
    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    
    struct student *temp = *head;
    
    while (temp != NULL && temp->id != targetId) {
        temp = temp->next;
    }
    
    if (temp == NULL) {
        printf("Entry with id %d not found.\n", targetId);
        return;
    }
    
    // If the node to be deleted is the head node
    if (temp == *head) {
        *head = temp->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
    } else {
        temp->prev->next = temp->next;
        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
    }
    
    free(temp);
    printf("Entry with id %d successfully deleted[cite: 4].\n", targetId);
}

int main() {
    struct student *head = NULL;
    
    // Create a sample doubly linked list with about 5 entries[cite: 4]
    initializeList(&head);
    
    int choice;
    do {
        // Menu Items[cite: 4]
        printf("\n--- Menu Items ---\n");
        printf("1. Insert Entry[cite: 4]\n");
        printf("2. Delete Entry[cite: 4]\n");
        printf("3. Display List[cite: 4]\n");
        printf("4. Exit[cite: 4]\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                insertEntry(&head);
                break;
            case 2:
                deleteEntry(&head);
                break;
            case 3:
                displayList(head);
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
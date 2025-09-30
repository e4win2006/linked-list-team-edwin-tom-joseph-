#include <stdio.h>
#include <stdlib.h>

struct Node {
    int rollNo;
    struct Node* next;
};

// function to create a new node
struct Node* createNode(int rollNo) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->rollNo = rollNo;
    newNode->next = NULL;
    return newNode;
}

// function to insert at the end
void insert(struct Node** head, int rollNo) {
    struct Node* newNode = createNode(rollNo);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// function to display
void display(struct Node* head) {
    printf("Roll Numbers in Linked List: ");
    while (head != NULL) {
        printf("%d", head->rollNo);

        if (head->next != NULL) printf(" -> ");

        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;


    insert(&head, 291);  // Your roll number
    insert(&head, 292);  // teammate 1
    insert(&head, 293);  // teammate 2
    insert(&head, 294); // teammate 3
    insert(&head,289);

    display(head);
    return 0;
}


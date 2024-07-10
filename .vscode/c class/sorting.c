#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert(struct Node** head, int data) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = *head;
    *head = ptr;
}

void display(struct Node* head) {
    struct Node* ptr = head;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void sort(struct Node* head) {
    struct Node* current = head;
    struct Node* index = NULL;
    int temp;

    if (head == NULL) {
        return;
    }
    else {
        while (current != NULL) {
            index = current->next;

            while (index != NULL) {
                if (current->data > index->data) {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

int main() {
    struct Node* head = NULL;

    insert(&head, 6);
    insert(&head, 4);
    insert(&head, 2);
    insert(&head, 5);
    insert(&head, 10);
    insert(&head, 1);
    insert(&head, 77);

    printf("Original Linked List:\n");
    display(head);

    sort(head);

    printf("Sorted Linked List:\n");
    display(head);
}

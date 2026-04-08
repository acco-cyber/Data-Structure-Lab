#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

void insertFirst(int item) {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    
    if (newnode == NULL) {
        printf("OVERFLOW\n");
        return;
    }

    newnode->data = item;
    newnode->next = start;
    start = newnode;
}

void display() {
    struct node *ptr = start;
    printf("\nLinked List: ");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    
    printf("NULL\n");
}

int main() {
    int n, item, i;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &item);
        insertFirst(item);
    }

    display();

    return 0;
}
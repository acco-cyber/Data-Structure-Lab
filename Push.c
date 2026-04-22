#include <stdio.h>
#define MAXSTK 5

int STACK[MAXSTK];
int TOP = -1;

void PUSH(int ITEM) {
    if (TOP == MAXSTK - 1) {
        printf("OVERFLOW\n");
        return;
    }

    TOP = TOP + 1;
    STACK[TOP] = ITEM;

    printf("Item %d pushed into stack\n", ITEM);
}

void DISPLAY() {
    if (TOP == -1) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements:\n");
    for (int i = TOP; i >= 0; i--) {
        printf("%d\n", STACK[i]);
    }
}

int main() {
    int n, item;

    // Step 1: Take existing stack from user
    printf("Enter number of existing elements in stack: ");
    scanf("%d", &n);

    if (n > MAXSTK) {
        printf("Stack overflow! Too many elements.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &STACK[i]);
    }

    TOP = n - 1;  // set TOP correctly

    // Show initial stack
    printf("\nInitial ");
    DISPLAY();

    // Step 2: Push new item
    printf("\nEnter item to push: ");
    scanf("%d", &item);

    PUSH(item);

    // Final stack
    printf("\nAfter PUSH ");
    DISPLAY();

    return 0;
}

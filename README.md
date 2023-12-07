0x17. C - Doubly linked lists

In C programming, a doubly linked list is a type of linked list where each node contains a data element and two pointers. These pointers are references to the next and previous nodes in the sequence. Unlike a singly linked list, where each node points to the next node, a doubly linked list allows for traversal in both forward and backward directions.

Here is a basic structure for a doubly linked list node in C:

```c
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
```

Now, let's go through the basic operations you can perform on a doubly linked list:

### 1. Insertion:

#### a. Insert at the beginning:
```c
void insertAtBeginning(struct Node** head, int newData) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    newNode->prev = NULL;
    
    if (*head != NULL) {
        (*head)->prev = newNode;
    }

    *head = newNode;
}
```

#### b. Insert at the end:
```c
void insertAtEnd(struct Node** head, int newData) {
    struct Node* newNode = malloc(sizeof(struct Node));
    struct Node* last = *head;

    newNode->data = newData;
    newNode->next = NULL;

    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = newNode;
    newNode->prev = last;
}
```

### 2. Deletion:

#### a. Delete a node by value:
```c
void deleteNode(struct Node** head, int key) {
    struct Node* current = *head;

    while (current != NULL && current->data != key) {
        current = current->next;
    }

    if (current == NULL) {
        return; // Node with key not found
    }

    if (current->prev != NULL) {
        current->prev->next = current->next;
    } else {
        *head = current->next;
    }

    if (current->next != NULL) {
        current->next->prev = current->prev;
    }

    free(current);
}
```

### 3. Traversal:

```c
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d <-> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
```

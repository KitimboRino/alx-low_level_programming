0x12. C - Singly linked lists

Using Linked Lists vs. Arrays in C:

Linked Lists and Arrays are both data structures in C, and each has its own set of advantages and disadvantages. The choice between them depends on your specific requirements. Here's when and why you might choose one over the other:

Arrays:

Contiguous Memory: Arrays store elements in contiguous memory locations. This allows for faster access to elements using their indices.
Fixed Size: The size of an array is fixed when it's declared, which means you need to know the maximum number of elements in advance.
Constant Time Access: Accessing an element by index in an array is a constant-time operation, O(1).
Use arrays when:

You know the size of your data structure in advance, and it won't change.
You need fast, constant-time access to elements.
Linked Lists:

Dynamic Size: Linked lists can grow or shrink dynamically. You can allocate memory for a new element when needed, which makes them suitable for situations where the size is unknown or changes frequently.
Insertion/Deletion: Insertion and deletion operations in a linked list are generally faster than in an array because they don't require shifting elements.
Non-contiguous Memory: Linked lists don't require contiguous memory; each element (node) contains a pointer to the next node.
Use linked lists when:

The size of your data structure is unknown or can change.
You frequently need to insert or delete elements.
Memory is fragmented or you need to allocate memory dynamically.
Building and Using Linked Lists in C:

A singly linked list consists of nodes, where each node contains data and a pointer/reference to the next node in the list. To create and use a linked list in C, you typically need to define a struct for the node and manage the list by manipulating these nodes. Here's a simple example of how to build and use a linked list in C:

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    // Initialize an empty linked list
    struct Node* head = NULL;

    // Create nodes and add them to the list
    head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);

    // Traverse and print the linked list
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // Remember to free memory when done
    current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
In this example, we define a struct Node to represent each element in the linked list. We create nodes using the createNode function and connect them to build the list. Finally, we traverse the list and free the allocated memory when done.

This is a basic example of a singly linked list. Doubly linked lists and other variations can be created similarly with slight modifications to the node structure and the management of previous and next pointers.

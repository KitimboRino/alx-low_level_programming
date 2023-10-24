0x13. C - More singly linked lists

Linked lists in C are a dynamic data structure used to store and manage collections of data. They are particularly useful when the number of elements is not known in advance, as they can grow or shrink as needed. Here's how to use linked lists in C:

1. **Define a Node Structure:**

   You need to create a structure to represent each element in the list. This structure typically contains two components:
   
   ```c
   struct Node {
       int data;          // The data stored in the node
       struct Node* next; // A pointer to the next node
   };
   ```

2. **Creating a Linked List:**

   Create a pointer to the head of the list. The head points to the first element in the list. Initially, it should be set to `NULL` to indicate an empty list.

   ```c
   struct Node* head = NULL;
   ```

3. **Insertion:**

   To insert a new element into the list, you create a new node and adjust the `next` pointers to link it correctly. You can insert at the beginning (prepend) or at the end (append) or at any specific position.

   - **Prepend (Insert at the Beginning):**

     ```c
     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
     newNode->data = newData;
     newNode->next = head;
     head = newNode;
     ```

   - **Append (Insert at the End):**

     ```c
     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
     newNode->data = newData;
     newNode->next = NULL;

     if (head == NULL) {
         head = newNode;
     } else {
         struct Node* current = head;
         while (current->next != NULL) {
             current = current->next;
         }
         current->next = newNode;
     }
     ```

4. **Traversal:**

   To access or print the elements, you can iterate through the list by following the `next` pointers.

   ```c
   struct Node* current = head;
   while (current != NULL) {
       printf("%d ", current->data);
       current = current->next;
   }
   ```

5. **Deletion:**

   You can remove nodes from the list by updating the `next` pointers to bypass the node you want to remove.

   - **Delete from Beginning:**

     ```c
     struct Node* temp = head;
     head = head->next;
     free(temp);
     ```

   - **Delete from End:**

     ```c
     if (head == NULL) {
         // The list is empty
     } else if (head->next == NULL) {
         free(head);
         head = NULL;
     } else {
         struct Node* current = head;
         while (current->next->next != NULL) {
             current = current->next;
         }
         free(current->next);
         current->next = NULL;
     }
     ```

6. **Memory Cleanup:**

   After you're done with the linked list, make sure to free the memory allocated for each node to prevent memory leaks.

   ```c
   while (head != NULL) {
       struct Node* temp = head;
       head = head->next;
       free(temp);
   }
   ```

Remember to handle error cases, like when memory allocation fails, and adapt the above examples to the specific needs of your application. Linked lists are versatile data structures and can be used in various situations where dynamic data storage and manipulation are required.

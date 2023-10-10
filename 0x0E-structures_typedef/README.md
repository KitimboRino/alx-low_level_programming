0x0E. C - Structures, typedef

Structures in C are composite data types that allow you to group together variables of different types under a single name. They are used to represent a collection of related data elements as a single unit. Here's how to use structures:


Definition of a Structure:
struct MyStruct {
    int member1;
    float member2;
    char member3;
};

You can use the `struct` keyword


2. Declaration of Structure Variables:
After defining a structure, you can declare variables of that structure type:
struct MyStruct myVariable;

3. Accessing Structure Members:
You can access the members of a structure using the dot `.` operator:

myVariable.member1 = 42;
myVariable.member2 = 3.14;
myVariable.member3 = 'A';

4. Initializing Structure Variables:
You can initialize structure variables at the time of declaration:
struct MyStruct myVariable = {42, 3.14, 'A'};





5. Passing Structures to Functions:
You can pass structures to functions by value or by reference (using pointers) to manipulate or work with the structure's data.

void printStruct(struct MyStruct s) {
    printf("%d %f %c\n", s.member1, s.member2, s.member3);
}


int main() {
    struct MyStruct myVariable = {42, 3.14, 'A'};
    printStruct(myVariable);
    return 0;
}
6. Why to Use Structures:
Structures are useful for organizing and grouping related data. They help in creating more complex data types and are fundamental for defining data structures such as linked lists, trees, and records. Structures also improve code readability by encapsulating related data into a single entity.

Using `typedef`:
`typedef` is used to create a custom alias or name for existing data types, including structures. It can make code more readable and manageable. 
For example, you can use `typedef` to create shorter names for complex data types:
typedef struct {
    int x;
    int y;
} Point;
int main() {
    Point p = {1, 2};
    printf("Point coordinates: (%d, %d)\n", p.x, p.y);
    return 0;
}
Here, we created a `typedef` alias for the structure without giving it a separate name. The `typedef` allows us to use `Point` as a type name for variables instead of having to write `struct Point` every time.
In summary, structures are used to group related data elements together, and `typedef` is used to create custom names for data types, including structures, to improve code readability and manageability.

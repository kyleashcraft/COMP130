## Review

static array advantage: random access
dynamic array advantages: random access, size can be determined during run time

random access: direct access to a point in array - `arr[5]`


## Link Lists
* data values in arrays are accessed using arithmetic
* only uses required memory, very storage efficient (whereas arrays allocate static amount of memory)
* memory is linked together
* access must start from head pointer, then continue in order through each node

link lists much be emcompassed by a class or struct, with self value and a pointer to the next node

Struct definition (ignoring methods)
```
struct Node
{
  int data = 0;
  Node *link = nullptr; //points to another object of the same type (Node)
}
```

Specific node definitions (building a Link list of 12 -> 2 -> 79)
```
Node *headPtr = nullptr; //good practice to set pointers to null
Node *tailPtr = nullptr;

headPtr = new Node;
(*headPtr).data = 12; //parentheses force derefferencing before trying to access 'data' field.
//alternative: headPtr -> data = 12
headPointer -> link = nullptr; //temporarily point head pointer to a null pointer
tailPtr = headPointer; //good practice
headPtr -> link = new Node; //creates a new node, assigns it to next link in the list

tailPtr = headPtr -> link; //reassigns tailPtr to last link in the list
tailPtr -> data = 2;

tailPtr -> link = new Node;
tailPtr = tailPtr -> link;
tailPtr -> data = 17;

Node *temp = headPtr; //adds a new leading pointer to the link list
headPtr = new Node;
headPtr -> data = 11;
headPtr -> link = temp;

//link list is now 11 -> 12 -> 2 -> 79
//now add 17 between 12 and 2 such that the list is 11 -> 12 -> 17 -> 2 -> 79

bool replaced = false;
Node *checkPtr = headPtr;
Node *newPtr = nullptr;

while(replaced != true){
  if (checkPtr -> link -> value == 2){
    newPtr = new Node;
    newPtr -> data = 17;
    newPtr -> link = checkPtr -> link;
    checkPtr -> link = newPtr;
    replaced = true;
  }
  if (!replaced) checkPtr = checkPtr -> link;
}
```

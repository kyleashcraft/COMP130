# Pointers Part 2

`int *ptr1 = new int(10)` assigns a pointer to an int `cout << *ptr1` would print `10`
`int *ptr2 = new int[10]` assigns a pointer to an empty array of size ten. `cout << *ptr2` would print garbage values.

`int *const ptr;` creates a constant pointer, meaning that the location it maps to cannot change.
`const int *ptr;` creates a pointer with a constant dereferenced value.
same for `int const *ptr;` 

``` int data = 999;
int *const dataptr = &data;
*dataptr += 1;
cout << data; ``` Would output `1000`.

`const int *const pointer = &something` neither the data nor the pointer can change (read only).
- You CAN change something by calling operations on the `something` variable.

Passing pointers by reference/value is the same as simple data types except passing a dereferenced pointer by reference `(int* &var)`
- This creates a pointer equivalent to the passed in pointer. Modifying its location will modify the original pointers location.

address of constant pointer `int *const something` can't change

poointer to a constant `const int* somethingElse` can't change dereferenced value `*somethingelse = 9;`

You can't return a const array from a function, but you can return a pointer to one.

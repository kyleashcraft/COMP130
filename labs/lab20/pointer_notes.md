pointers reference other variables
- 'a pointer carries an address as an int carries an integer'

`int *var1;` declares var1 as a pointer
`int *var1, var2;` declares var1 as a pointer, not var 2
`int *var1, var2, *var3;` ceclares var1 and var3 as pointers.

`int pointer = &month;` declares a pointer called pointer and maps it to the month.
- `&` is the location (by reference) operator.
- `pointer = &day;` would reassign the pointer variable to the day variable location.

when accessing a pointers value (derefererncing) in an executable statement, you 
must also use the `*`
- `cout << *pointer;` will print the value of the variable that pointer is mapped to.

array name is a constant pointer
- any array can be treated as a pointer.
``` int intArr[3] = {5, 9, 11};
cout << *intArr; ```

Will print `5` to the console.

Pointer arithmetic (continuing from `intArr` from above)
`int *loosePtr = intArr;`
`cout << loosePtr;` prints 5
`loosePtr += 2;` POINTER ARITHMETIC
`cout << loosePtr;` prints 11 (index 0+2 of intArr array)

BEST PRACTICE: when initializing pointers, set to nullptr
- otherwise you will get garbage values before assiging

When you are done with a pointer it is best to `delete ptr;` so the memory location is no longer used
- following this you must also set the pointer to nullptr, otherwise the pointer still points to that location

`int* arr = new int[10]` declares a dynamic array
- pointers can be linked to arrays of nondescript size
- once linked to a sized array the size can no longer change

deallocate a dynamic array with `delete[ ] ptr;`
- must be at index 0 of an array.
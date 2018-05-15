- an exception is a runtime error
- exception handling allows separation of error reporting and error handling
- you can write a function that 'throws' an exception, leaving the caller of the function to deal with it

- exception handling is ideal for avoiding program crashes in the event of something like a logic error

```c++
#include <stdexcept>
#include <iostream>

double divide(double numerator, double denominator)
{
    if (denominator == 0)
    {
        std::exception e("ERROR: ZERO DIVIDE"); //creates exception variable, e.
        throw e; //'sends' exception
    } else {
        return numerator / denominator;
}
```

A function caller can catch a function or pass it along.



```c++
try{
    //some logic, including an exception creation in variable 'e' and throwing that exception.
}

catch (exception e) //function that 'catches' any exceptions if they exist
{
    cout << e.what();
}
```

#### Exception steps
- Detect an exception (within a `try{}` block)
- Raise an exception (`throw exceptionVar;`)
- Handle an exception (`catch(exception exceptionVar)`)

- code after a catch block will only be executed if an exception is handled by it
- you can throw an exception that isn't an exception type
-- For example, if dividing by zero in a divide function, you can throw the int variable storing zero.

- Exceptions should only really be used when the method for handling it is not certain
-- For example exception handling isn't really necessary when asking for int input and a user inputs a string (a simple if statement would be more suitable)

- when an exception is thrown the program immediately jumps to the catch block

- many exception sub classes, exception being the super class

- stack unwinding is a mechanism for sending an exception up the stack
-- necessary to allow an exception to be caught in another scope but is very costly in the runtime


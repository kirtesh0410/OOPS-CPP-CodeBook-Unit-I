Brief description of Program :-

• **Inline and Friend Function :-**

This C++ program demonstrates the use of an **inline member function and a friend function** to access data stored inside a class.

* The **`Test` class** contains a private data member named `value`.
* The constructor initializes the private `value` member.
* The **inline `getValue()` function** returns the value stored in the object.
* The `inline` keyword indicates that the function can be treated as an inline function.
* The **`friend` function `show()`** is declared inside the class.
* A friend function can access the **private data** of the class even though it is not a member function.
* The `show()` function directly accesses the private `value` member.
* The program demonstrates two different ways of accessing the stored value: through an **inline getter** and through a **friend function**.

**In short:** The program demonstrates how **inline functions and friend functions** can be used to access and work with class data, including private data through a friend function. 

# OOPS-CPP-CodeBook-Unit-I
Object Oriented Programming with C++ - Unit I CodeBook

Student Name :- Kirtesh Bharambe

ZPRN :- 125UET1089

Class/Division :- SY AIDS C

Unit :- I

List of Programs :-

                1)Basic Data Types  
                2)if-else  
                3)Loop and Array  
                4)Functions  
                5)Class and Object  
                6)Constructor and Destructor  
                7)Static Member  
                8)Inline and Friend Function  


Brief descriptions of each Program :-

• **1)Basic Data Types :-**

This C++ program demonstrates the use of **basic data types** to store different types of student information such as **roll number, grade, and fee amount**.

* The program uses the **`int` data type** to store the student's roll number.
* The **`char` data type** is used to store a single character representing the student's grade.
* The **`float` data type** is used to store the student's fee amount as a decimal value.
* The **`cout` statement** is used to display the stored values on the screen.
* The program demonstrates how different types of data can be stored using appropriate C++ data types.
* The `main()` function contains the executable statements of the program.

**In short:** The program demonstrates the use of **basic C++ data types such as `int`, `char`, and `float`** for storing and displaying different types of student information. 

• **2)if-else :-**

This C++ program implements a simple **student result checking system** to determine whether a student has **passed or failed** based on marks.

* The program stores the student's marks in an **integer variable**.
* The **`if` statement** checks whether the marks are greater than or equal to the passing mark.
* If the condition is true, the program displays **"Pass"**.
* The **`else` statement** executes when the `if` condition is false.
* If the marks are below the passing condition, the program displays **"Fail"**.
* This demonstrates **selection or decision-making** in a C++ program.

**In short:** The program demonstrates how the **`if-else` selection statement** can be used to make decisions based on a student's marks. 

• **3)Loop and Array :-**

This C++ program demonstrates the use of a **loop and array** to store and display the marks of **five students**.

* The **`marks` array** stores five student marks in a single collection.
* An **array** allows multiple values of the same data type to be stored together.
* The **`for` loop** is used to repeatedly access and display each mark.
* The variable **`i`** acts as the index variable for accessing array elements.
* Array indexing starts from **0**, so the elements are accessed from `marks[0]` to `marks[4]`.
* The loop avoids writing separate output statements for every student mark.

**In short:** The program demonstrates how **arrays and `for` loops** can be used together to efficiently store and display multiple student marks. 

• **4)Functions :-**

This C++ program demonstrates the use of a **function** to perform an addition operation and make the operation reusable.

* The program declares an **`add()` function prototype** before the `main()` function.
* The **function prototype** informs the compiler about the function before it is called.
* The `main()` function stores two integer values and passes them to the `add()` function.
* The **`add(a, b)`** function call sends the values to the function parameters.
* The function receives the values through parameters **`x` and `y`**.
* The `return` statement sends the calculated sum back to the calling statement.
* Using a function makes the addition operation **reusable**.

**In short:** The program demonstrates how **functions, function prototypes, parameters, function calls, and return values** can be used to perform reusable operations in C++. 

• **5)Class and Object :-**

This C++ program demonstrates the use of a **class and object** to store and display student information.

* The **`Student` class** acts as a blueprint for creating student objects.
* The class contains data members such as **`name`** and **`age`**.
* The **`show()` member function** displays the student's information.
* An object named **`s1`** is created from the `Student` class.
* Values are assigned to the object's data members using the **dot (`.`) operator**.
* The object calls the `show()` member function to display its details.
* This program demonstrates the basic relationship between a **class and its object**.

**In short:** The program demonstrates how **classes and objects** can be used to represent student information and perform operations through member functions. 

• **6)Constructor and Destructor :-**

This C++ program demonstrates the use of a **constructor and destructor** to show automatic object initialization and cleanup.

* The **`Demo` class** contains a constructor named `Demo()`.
* The constructor is automatically called when an object of the class is created.
* The constructor displays a message indicating that it has been called.
* The **`~Demo()` destructor** is automatically called when the object reaches the end of its lifetime.
* The destructor displays a message indicating that cleanup is taking place.
* The program uses the object **`d`** to demonstrate the order of constructor and destructor execution.

**In short:** The program demonstrates how a **constructor is automatically called during object creation and a destructor is automatically called when the object is destroyed**. 

• **7)Static Member :-**

This C++ program demonstrates the use of a **static data member** to count the number of objects created from a class.

* The `Student` class contains a static integer member named **`count`**.
* A **static member belongs to the class** rather than to individual objects.
* The constructor increments `count` whenever a new `Student` object is created.
* The static member is defined outside the class using **`Student::count`**.
* Three objects, **`s1`, `s2`, and `s3`**, are created in the `main()` function.
* Since the same static variable is shared by all objects, its value becomes **3**.
* The static member is accessed using the **class name and scope resolution operator**.

**In short:** The program demonstrates how a **static data member can be shared among all objects of a class and used to count the number of objects created**. 

• **8)Inline and Friend Function :-**

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

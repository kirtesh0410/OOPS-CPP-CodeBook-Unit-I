Brief description of Program :-

• **Static Member :-**

This C++ program demonstrates the use of a **static data member** to count the number of objects created from a class.

* The `Student` class contains a static integer member named **`count`**.
* A **static member belongs to the class** rather than to individual objects.
* The constructor increments `count` whenever a new `Student` object is created.
* The static member is defined outside the class using **`Student::count`**.
* Three objects, **`s1`, `s2`, and `s3`**, are created in the `main()` function.
* Since the same static variable is shared by all objects, its value becomes **3**.
* The static member is accessed using the **class name and scope resolution operator**.

**In short:** The program demonstrates how a **static data member can be shared among all objects of a class and used to count the number of objects created**.

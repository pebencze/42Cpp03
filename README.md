# 42Cpp03
Inheritance in C++.

## Setters and Getters: Why Not Use const Reference for Primitive Types?

1.	Efficiency:
•	For primitive types like int, char, float, etc., the size of the type is small (usually 4 bytes for int), so passing by value is inexpensive in terms of memory and performance.
•	Passing by reference might involve an extra level of indirection, which can be slightly less efficient than passing by value. For small data types, the cost of copying the value is negligible compared to the cost of dereferencing a reference.
2.	Const Reference Usage:
•	const references are beneficial when dealing with large objects or complex data types (like std::string, std::vector, or user-defined classes).
•	Avoiding Copying: Returning a const reference avoids the cost of copying large objects.
•	Safety with const: By returning a const reference, you allow the caller to access the data without the ability to modify it, maintaining encapsulation.

Example:

    ```c++
    void setHitPoints(int hitPoints) {
        _hitPoints = hitPoints;
    }

    void setName(const std::string& name) {
        _name = name;
    }
    ```


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

### Protected Members

Protected members of a class can be accessed from the children.

```c++
protected:
    std::string   _name;
    unsigned int  _hitPoints;
    unsigned int  _energyPoints;
    unsigned int  _attackDamage;
```

### Default Assignment Operator

The compiler has a default assignment operator that we override. It will make more sense later when we use dynamic allocation.
1.	Default Behavior:
•	The default assignment operator performs a member-wise assignment. It copies each non-static data member from the source object to the target object.
2.	Shallow Copy:
•	For simple data types (e.g., integers, floats), the default operator works fine. However, for classes managing dynamic resources (e.g., pointers), the default operator performs a shallow copy. This can lead to issues like double deletion if two objects end up managing the same resource.
3.	Automatic Member-Wise Assignment:
•	If your class does not manage dynamic memory or other resources that need special handling, the default assignment operator is often sufficient.

### Shallow Copy vs. Deep Copy:
A shallow copy duplicates the original element but doesn't replicate any elements that the original element references. A deep copy duplicates not only the original element but also any elements that the original element references.

### Order of Constructors and destructors

**Base class constructor first, derived class constructor next**
ClapTrap default constructor called </b>
ScavTrap default constructor called</b>
ClapTrap parameterized constructor called</b>
ScavTrap parameterized constructor called</b>

**Derived class destructor first, base class destructor next**
ScavTrap destructor called</b>
ClapTrap destructor called</b>
ScavTrap destructor called</b>
ClapTrap destructor called</b>
ClapTrap destructor called</b>
ClapTrap destructor called</b>

### Diamond Problem
"The "diamond problem" (sometimes referred to as the "Deadly Diamond of Death") is an ambiguity that arises when two classes B and C inherit from A, and class D inherits from both B and C. If there is a method in A that B and C have overridden, and D does not override it, then which version of the method does D inherit: that of B, or that of C?" - Wikipedia (22.08.24)

multiple inheritance:

 A     A
 |     |
 B     C
  \   /
   \ /
    D

diamond inheritance:
    A
   / \
  /   \
 B     C
  \   /
   \ /
    D


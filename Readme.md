# C++ Module 00

## Overview
This is my first project in C++ and in OOP in general. I have learned a lot throughout the project! <br /> 
**Excercise 00** taught me about the standard namespace and how output redirection works in C++, whilst **excercise 01** focused on classes. In **excercise 02** one had to reconstruct a .cpp file based on a testfile, a logfile and a header file to test if we really understood the concepts, especially the initializer list and static members. 

## Key Learnings
C++ was developed by Bjarne Stroustrup in 1985, and in general it enables a clear structure, easier maintenance and execution and DRY code.

### Classes
Its crucial component is the **class**, which is a template for **objects**, i.e. an object is an **instance** of a class. The class has **attributes** and **methods**, that are called **"members"** and will be inherited by the object. There are also **non-member** attributes and methods that exist at class-level. These can be declared as static. It is important to define static members, meaning to assign initial values to them in a .cpp file, like in ex02:
```c++
    int Account::_nbAccounts = 0;
    int Account::_totalAmount = 0;
    int Account::_totalNbDeposits = 0;
    int Account::_totalNbWithdrawals = 0;
```
In my code I used outside class definition of my class methods with the following syntax: `MyClass::myMethod(){definition}`. 

### Access Specifiers
The **public** or **private** keywords within a class are **access specifiers**. This guarantees us controlled access to class members. I used the following syntax for private attributes or methods: `_methodName()`, `_attributeName`. Typically, constructors, destructors, and public methods are listed first, followed by protected methods (if any), and then private methods and data members. <br />
As opposed to a struct, everything that is not specified in a class is private. Private attributes can be accessed via **getter** and **setter** functions.  <br />
Examples:  <br />
```c++
//getter or accessor method
int	Account::getNbAccounts( void ) {
    return _nbAccounts;
}
//setter or mutator method
void Contact::setDarkestSecret(std::string darkestSecret) {
    this->_darkestSecret = darkestSecret;
}
```
Moreover, it can have **constructor** and **destructor** functions that can be called at the creation and destruction of an object. <br />
I have also learned about the special instance pointer **this** that refers to the implicit object parameter (to the class). It can only be used inside of non-static functions.  <br />
Another useful term is the **initializer list** that can be applied in a constructor method to set the value of certain class attributes at object creation.  <br /> 
Example from ex02: <br />
```c++
Account::Account( int initial_deposit ) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)

```
### I/O
`iostream` is a **header file library** that lets us work with input and output objects <br />
    - **std::cin**: Standard input stream (typically reads from the keyboard) with the extraction operator >>  <br />
    - **std::cout**: Standard output stream (typically writes to the console) with the insertion operator <<  <br />
    - **std::cerr**: Standard error stream (typically writes to the console, used for error messages).  <br />
    - **std::clog**: Standard logging stream (typically writes to the console, used for logging information).  <br />
For error messages I used clog, because is more efficient than cerr.

### Namespaces
Namespaces serve as logical structuring of code and in this project we had to use some things from the std namespace.  <br />
**using namespace std** contains all the definitions from the C++ Standard Library. This includes functions, classes, and objects that are part of the standard.  <br />
    - std::cout, std::vector, std::string  <br />
    - it has also many cool string functions like at() etc.  <br />
While **using namespace std**; can simplify code by reducing the need for **std::** prefixes, there are significant benefits to not using it in certain contexts, including avoiding name conflicts, improving code clarity. It is also forbidden in the subject. <br />
**::** is called the "scope resolution operator".

## Links
[http://www.cplusplus.com/reference/string/string/](http://www.cplusplus.com/reference/string/string/)  <br />
[http://www.cplusplus.com/reference/iomanip/](http://www.cplusplus.com/reference/iomanip/) <br />
[https://www.w3schools.com/cpp/default.asp](https://www.w3schools.com/cpp/default.asp)

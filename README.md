# EXPERIMENT-14 (Inheritance)

## AIM- To study and implement inheritance
## Theory- 
In object-oriented programming, inheritance allows a child class to inherit properties and behaviors from a parent class.
Inheritance Modes:
Public Inheritance: Public and protected members of the base class remain public and protected in the derived class.
Protected Inheritance: Public and protected members of the base class become protected in the derived class.
Private Inheritance: Public and protected members of the base class become private in the derived class.
Types of Inheritance:
Single Inheritance: A class inherits from one parent class.
Multiple Inheritance: A class inherits from more than one parent class.
Multilevel Inheritance: A class is derived from another derived class.
Hierarchical Inheritance: Multiple classes inherit from the same parent class.
## Code- 
~~~
#include <iostream>
using namespace std;

// Base class
class Parent {
public:
    void displayParent() {
        cout << "This is the Parent class." << endl;
    }
};

// Derived class
class Child : public Parent {
public:
    void displayChild() {
        cout << "This is the Child class." << endl;
    }
};

int main() {
    Child obj;
    obj.displayParent();
    obj.displayChild();
    return 0;
}

~~~
b.
~~~
#include <iostream>
using namespace std;

// Base class 1
class Parent1 {
public:
    void displayParent1() {
        cout << "This is Parent1 class." << endl;
    }
};

// Base class 2
class Parent2 {
public:
    void displayParent2() {
        cout << "This is Parent2 class." << endl;
    }
};

// Derived class
class Child : public Parent1, public Parent2 {
public:
    void displayChild() {
        cout << "This is the Child class." << endl;
    }
};

int main() {
    Child obj;
    obj.displayParent1();
    obj.displayParent2();
    obj.displayChild();
    return 0;
}
~~~
c.
~~~
#include <iostream>
using namespace std;

// Base class
class Grandparent {
public:
    void displayGrandparent() {
        cout << "This is the Grandparent class." << endl;
    }
};

// Derived class from Grandparent
class Parent : public Grandparent {
public:
    void displayParent() {
        cout << "This is the Parent class." << endl;
    }
};

// Derived class from Parent
class Child : public Parent {
public:
    void displayChild() {
        cout << "This is the Child class." << endl;
    }
};

int main() {
    Child obj;
    obj.displayGrandparent();
    obj.displayParent();
    obj.displayChild();
    return 0;
}

~~~
d.
~~~
#include <iostream>
using namespace std;

// Base class
class Parent {
public:
    void displayParent() {
        cout << "This is the Parent class." << endl;
    }
};

// Derived class 1
class Child1 : public Parent {
public:
    void displayChild1() {
        cout << "This is Child1 class." << endl;
    }
};

// Derived class 2
class Child2 : public Parent {
public:
    void displayChild2() {
        cout << "This is Child2 class." << endl;
    }
};

int main() {
    Child1 obj1;
    Child2 obj2;

    obj1.displayParent();
    obj1.displayChild1();

    obj2.displayParent();
    obj2.displayChild2();

    return 0;
}
~~~

## Output-


## Conclusion-
 we learnt about different types of inheritance





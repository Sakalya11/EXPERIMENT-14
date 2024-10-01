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
#include<iostream>
#include <string> 
using namespace std;

class Uni {
    public:
    string uni = "Symbiosis: ";
    void discipline (){
        cout<<"Engineering"<<endl;
    }
};
class dep: public Uni {
    public:
    string dept = "Electronics and telecommunications ";
};

int main(){
    dep u1;
    u1.discipline();
    cout<<u1.uni+" "+u1.dept;
}
~~~
b.
~~~
#include<iostream>
#include<string>
using namespace std;

// Parent Class-1
class Vehicle {
    public:string company = "Ford";
    void type() {
        cout << "Mustang" << endl;
    }
};

// Parent Class-2
class Specs {
public:
    string mileage = "8 km/l";
    
    void colour() {
        cout << "Grey" << endl;
    }
};

// Child Class (derived from both Vehicle and Specs)
class Car : public Vehicle, public Specs {
public:
    string seater = "4 seater";
};

int main() {
    Car f2;
    
    f2.colour(); 
    cout << f2.company << endl; 
    f2.type(); 
    cout << "(" << f2.seater << ")" << endl; 
    cout << "MILEAGE: " << f2.mileage << endl; 

    return 0;
}
~~~
c.
~~~
#include <iostream>
#include <string>
using namespace std;

// Parent Class-1
class Food {
public:
    string cuisine = "Indian";
    
    void type() {
        cout << "Asian" << endl;
    }
};

// Child Class-1 (derived from Parent-1)
class Dish : public Food {
public:
    string dish = "Biryani";
};

// Child Class-2 (derived from Child-1)
class Restaurant : public Dish {
public:
    string name = "Spice Kitchen";
};

int main() {
    Restaurant f3;
    
    f3.type();  
    cout << f3.cuisine << ": " << f3.dish << endl;   
    cout << "Restaurant: " << f3.name << endl;  

    return 0;
}
~~~
d.
~~~
#include <iostream>
#include <string>
using namespace std;

// Parent Class-1
class Jeans {
    public:
    static string type[3];
    void brand(){
        cout<<"H&M - &Denim"<<endl;
    }
};

// Initialize static member
string Jeans::type[3] = {"Bootcut", "Wide Leg", "Skinny"};

// Child Class-1
class Bootcut: public Jeans {
    public:
    string color="Dark Blue";
};

// Child Class-2
class WL: public Jeans {
    public:
    string color="Black";
};

// Child Class-3
class Skinny: public Jeans {
    public:
    string color="Grey";
};

int main(){
    Bootcut j1;
    cout<<endl;
    j1.brand();
    cout<<j1.type[0]<<": "<<j1.color<<endl;

    WL j2;
    cout<<endl;
    j2.brand();
    cout<<j2.type[1]<<": "<<j2.color<<endl;

    Skinny j3;
    cout<<endl;
    j3.brand();
    cout<<j3.type[2]<<": "<<j3.color<<endl;

    return 0;
}

~~~

## Output-


## Conclusion-
 we learnt about different types of inheritance





#include<iostream>
using namespace std;

// Base class
class Animal
{
public:
    void eat()
    {
        cout << "This animal can eat.\n";
    }
};

// Single Inheritance: Dog inherits from Animal
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog barks.\n";
    }
};

// Multiple Inheritance: Cat inherits from Animal and another class
class Jump
{
public:
    void jump()
    {
        cout << "This animal can jump.\n";
    }
};

class Cat : public Animal, public Jump
{
public:
    void meow()
    {
        cout << "Cat meows.\n";
    }
};

// Multilevel Inheritance: Puppy inherits from Dog
class Puppy : public Dog
{
public:
    void weep()
    {
        cout << "Puppy weeps.\n";
    }
};

// Hierarchical Inheritance: Cow and Tiger inherit from Animal
class Cow : public Animal
{
public:
    void moo()
    {
        cout << "Cow moos.\n";
    }
};

class Tiger : public Animal
{
public:
    void roar()
    {
        cout << "Tiger roars.\n";
    }
};

// Hybrid Inheritance: Combination of Hierarchical and Multiple
class Bird : public Animal, public Jump
{
public:
    void fly()
    {
        cout << "Bird flies.\n";
    }
};

int main()
{
    cout<< "Vanshika Aggarwal"<< endl;
    cout<< "Roll Number: 22001003138" << endl;
    // Single Inheritance
    Dog dog;
    dog.eat();
    dog.bark();

    // Multiple Inheritance
    Cat cat;
    cat.eat();
    cat.jump();
    cat.meow();

    // Multilevel Inheritance
    Puppy puppy;
    puppy.eat();
    puppy.bark();
    puppy.weep();

    // Hierarchical Inheritance
    Cow cow;
    cow.eat();
    cow.moo();

    Tiger tiger;
    tiger.eat();
    tiger.roar();

    // Hybrid Inheritance
    Bird bird;
    bird.eat();
    bird.jump();
    bird.fly();

    return 0;
}

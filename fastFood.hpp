#include <string>
#include <iostream>

class FastFood
{
public:
    // ⭐TODO: create a default constructor

    // ⭐TODO: create a parameterized constructor that initializes all of the private member variables

    // ⭐TODO: create a destructor that prints "[name_] has been destroyed!" and free up the dynamically allocated memory

    // ⭐TODO: create a copy constructor that performs a deep copy of another object to this object

    // ⭐TODO: create a copy assignment operator function that performs a deep copy of another object to this object

    void Display()
    {
        std::cout << *name_ << " is in " << *tier_ << std::endl;
    }

    // Accessors

    std::string *Name() const
    {
        return name_;
    }

    std::string *Owner() const
    {
        return owner_;
    }

    char *Tier() const
    {
        return tier_;
    }

    // Mutators

    void Name(std::string *name)
    {
        name_ = name;
    }

    void Owner(std::string *owner)
    {
        owner_ = owner;
    }

    void Tier(char *tier)
    {
        tier_ = tier;
    }

private:
    std::string *name_;
    std::string *owner_;
    char *tier_;
};
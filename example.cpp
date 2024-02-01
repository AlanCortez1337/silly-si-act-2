///////////////////////////////////////////////////////////////////
// This is the deep vs shallow example we discussed earlier using raw pointers
///////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

class InNOut
{
public:
    InNOut() : owner_(nullptr), address_(nullptr) {}
    InNOut(std::string *address, std::string *owner)
    {
        owner_ = owner;
        address_ = address;
    }

    InNOut(const InNOut &newInNOut) : address_(newInNOut.GetAddress()), owner_(newInNOut.GetOwner()) {}

    // InNOut(const InNOut& newInNOut) {
    //     *address_ = *(newInNOut.GetAddress());
    //     *owner_ = *(newInNOut.GetOwner());
    // }

    std::string *GetAddress() const { return address_; }
    std::string *GetOwner() const { return owner_; }

    void ChangeAddress(const std::string &newAddress)
    {
        *address_ = newAddress;
    }

    void ChangeOwner(const std::string &newOwner)
    {
        *owner_ = newOwner;
    }

    void PrintDetails()
    {
        std::cout << *owner_ << "'s In-n-Out is on " << *address_ << std::endl;
    }

private:
    std::string *address_;
    std::string *owner_;
};

int main()
{
    std::string name = "Bob";
    std::string address = "123 Funny Street";

    // 📚 Bob Has a In-n-Out already on 123 Funny Street so let's instantiate a new In-n-Out object
    InNOut BobsInNOut(&address, &name);
    // 📚 You know you want to open an In-n-Out on 123 Funny Street so let's just copy the blueprint of Bob's In-n-Out
    InNOut MyInNOut(BobsInNOut);
    // 📚 Let's see the data for both of the objects
    BobsInNOut.PrintDetails();
    MyInNOut.PrintDetails();
    // 📚 We know that your name isn't Bob so let's change only your name
    std::string newName = "Alberto";
    MyInNOut.ChangeOwner(newName);
    BobsInNOut.PrintDetails();
    MyInNOut.PrintDetails();

    return 0;
}
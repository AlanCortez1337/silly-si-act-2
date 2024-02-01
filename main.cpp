#include <iostream>
#include "fastFood.hpp"

int main()
{
    ////////////////////////////////////////////////////////
    // 🚩BE SURE TO FINISH fastFood.hpp before progressing🚩
    ////////////////////////////////////////////////////////

    std::cout << "----------------------------------" << std::endl;
    std::cout << "Copy Constructor Deep Copy" << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << "BEFORE" << std::endl;

    std::string resName = "In N Out";
    char tier = 'S';

    FastFood InNOut(&resName, &tier);
    FastFood yourResturant(InNOut);

    InNOut.Display();
    yourResturant.Display();

    // ⭐TODO: add your name below! (Use commas if you have more than one person in your group)
    std::string yourName = "";
    yourResturant.Owner(&yourName);

    InNOut.Display();
    yourResturant.Display();
    std::cout << "AFTER" << std::endl;

    std::cout << "----------------------------------" << std::endl;
    std::cout << "Copy Assignment Shallow Copy" << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << "BEFORE" << std::endl;

    FastFood newResturant = yourResturant;

    newResturant.Display();
    yourResturant.Display();

    // ⭐TODO: add your name below! (Use commas if you have more than one person in your group)
    std::string newNewName = "Sofi";
    newResturant.Name(&newNewName);

    newResturant.Display();
    yourResturant.Display();

    std::cout << "AFTER" << std::endl;

    return 0;
}
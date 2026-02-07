// Libraries
#include <iostream>

// Class Square
class Square
{
    public:
        // Variables
        int length;
        int mass;

        // Constructor
        Square(int length = 1, int mass = 1)
        {
            // Assign Values
            this->length = length;
            this->mass = mass;
        }

        // + Operator Overload
        Square operator+(Square Object)
        {
            Square Result_Object;
            Result_Object.length = this->length + Object.length;
            Result_Object.mass = this->mass + Object.mass;
            return Result_Object;
        }
};

// Main Function
int main(int argc, char *argv[])
{
    // Create Object
    Square a(15, 30);
    Square b(5, 10);

    // Use Operator
    Square c;
    c = a + b;

    // Show Values
    std::cout << c.length << " - " << c.mass << std::endl;

    // Return Function
    return 0;
}

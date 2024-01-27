#include <iostream>

// Ask the user to input two integers, prints the sum but does not return a value
void sum()
{
    int a{};
    int b{};

    std::cout << "Enter a number: \n";
    std::cout << "Value for a: " << a << '\n';
    std::cin >> a;

    std::cout << "Enter another number: \n";
    std::cout << "Value for b: " << b << '\n';
    std::cin >> b;

    std::cout << "Sum of those numbers: " << a + b << '\n';
}


// This only serves to convince the lexer that we are using x in uninitializedValue
void doNothing(int&) {}

// Used to demo what an Unitialized Value defaults to in C++
void uninitializedValue()
{
    int x;
    doNothing(x);

    std::cout << x << '\n';
}

void printMenu()
{
    std::cout << "\n--- Menu ---\nEnter an option 1 - 4\n";
    std::cout << "1. Sum 2 Numbers\n";
    std::cout << "2. Print a Wild Number\n";
    std::cout << "3. [Coming Soon]\n";
    std::cout << "4. Exit Program\n";
}

int main()
{
    int selection = 0;

    while (selection != 4)
    {
        printMenu();
        std::cin >> selection;
        switch (selection)
        {
        case 1:
            sum();
            break;
        case 2:
            uninitializedValue();
            break;
        case 3:
            std::cout << "TEST";
            break;
        case 4:
            break;
        }
    }
}

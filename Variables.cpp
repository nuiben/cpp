#include <iostream>

void sum()
{
    std::cout << "Enter a number: \n";
    int a{};
    std::cout << "Value for a: " << a << '\n';
    std::cin >> a;

    std::cout << "Enter another number: \n";
    int b{};
    std::cout << "Value for b: " << b << '\n';
    std::cin >> b;

    std::cout << "Sum of those numbers: " << a + b << '\n';
}

void doNothing(int&)
{
}

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

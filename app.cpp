#include <iostream>
#include <limits>
#include <string>

int add(int a, int b)
{
    return a + b;
}

int substract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        std::cout << "You can not divide by ";
        return 0;
    }
    std::cout << "The result is: ";
    return a / b;
}

bool validIntegerInput(int &number)
{
    while (!(std::cin >> number))
    {
        std::cout << "This is not a valid integer. Please enter a valid integer: " << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return true;
}

bool validOption(int &option)
{
    if (!(std::cin >> option) || option <= 0 || option > 5)
    {
        std::cout << "Invalid choice. Please enter a valid option (1-5)." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return false;
    }

    return true;
}

int main()
{

    int option;
    bool running = true;
    while (running)
    {

        std::cout << "|-----------------------------|" << std::endl;
        std::cout << "|             Menu            |" << std::endl;
        std::cout << "|1- Addition                  |" << std::endl;
        std::cout << "|2- Subraction                |" << std::endl;
        std::cout << "|3- Multiplication            |" << std::endl;
        std::cout << "|4- Division                  |" << std::endl;
        std::cout << "|5- End Program               |" << std::endl;
        std::cout << "|-----------------------------|" << std::endl;

        std::cout << "Enter your option here: ";
        if (!validOption(option))
        {
            continue;
        }

        int firstNum;
        int secondNum;

        switch (option)
        {
        case 1:
            std::cout << "Please enter the first number: " << std::endl;

            validIntegerInput(firstNum);

            std::cout << "Enter second number: " << std::endl;

            validIntegerInput(secondNum);

            std::cout << "The result is: " << add(firstNum, secondNum) << std::endl;

            break;

        case 2:
            std::cout << "Please enter the first number: " << std::endl;
            validIntegerInput(firstNum);

            std::cout << "Enter second number: " << std::endl;
            validIntegerInput(secondNum);

            std::cout << "The result is: " << substract(firstNum, secondNum) << std::endl;

            break;

        case 3:
            std::cout << "Please enter the first number: " << std::endl;
            validIntegerInput(firstNum);

            std::cout << "Enter second number: " << std::endl;
            validIntegerInput(secondNum);

            std::cout << "The result is: " << multiply(firstNum, secondNum) << std::endl;

            break;

        case 4:
            std::cout << "Please enter the first number: " << std::endl;
            validIntegerInput(firstNum);

            std::cout << "Enter second number: " << std::endl;
            validIntegerInput(secondNum);

            std::cout << divide(firstNum, secondNum) << std::endl;

            break;

        case 5:
            std::cout << "Program Ended";
            running = false;
            break;

        default:
            break;
        }
    }

    return 0;
}
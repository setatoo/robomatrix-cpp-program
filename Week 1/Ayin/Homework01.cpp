#include <iostream>
#include <string>
int main()
{
    int a, c;
    std::string d;
    while (true)
    {
        std::cout << "\n which one?\n Addition,Subtraction,Multiplication,Division,Exit\n";
        std::cin >> d;
        if (d == "Addition")
        {
            std::cout << "add avalo bede:" << std::endl;
            std::cin >> a;
            std::cout << "add dovomo bede \n";
            std::cin >> c;
            std::cout << a + c << std::endl;
        }
        else if (d == "Subtraction")
        {
            std::cout << "add avalo bede:" << std::endl;
            std::cin >> a;
            std::cout << "add dovomo bede \n";
            std::cin >> c;
            std::cout << a - c << std::endl;
        }
        else if (d == "Multiplication")
        {
            std::cout << "add avalo bede:" << std::endl;
            std::cin >> a;
            std::cout << "add dovomo bede \n";
            std::cin >> c;
            std::cout << a * c << std::endl;
        }
        else if (d == "Division")
        {
            std::cout << "add avalo bede:" << std::endl;
            std::cin >> a;
            std::cout << "add dovomo bede \n";
            std::cin >> c;
            if (c == 0)
            {
                std::cout << "Error 404! \n Division by zero \n ";
            }
            else
            {
                std::cout << a / c << std::endl;
            }
        }
        else if (d == "Exit")
        {
            std::cout << "felan khodahafez:D" << std::endl;
            return 0;
        }
        else
        {
            std::cout << "doeghat kon shaskool! \n";
        }
    }
    return 0;
}
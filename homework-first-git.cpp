#include <iostream>

int main()
{
    int n;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> n;
    std::cout << std::endl;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n - i; ++j)
        {
            std::cout << " ";
        }

        for (int k = 1; k <= (2 * i - 1); ++k)
        {
            std::cout << "*";
        }

        std::cout << std::endl;
    }
}

#include <iostream>

int gcf(int num1, int num2) //This concept uses the Euclidean Algorithm
{
    if (num1 < num2)
    {
        gcf(num2, num1);
    }

    int remainder = num1 % num2; //mod

    if (remainder == 0)
    {
        return num2;
    }

    gcf(num2, remainder); //recursive

}

int main()
{
    int gcf1, gcf2;

    std::cout << "Enter GCF #1" << std::endl;
    std::cin >> gcf1;
    std::cout << "Enter GCF #2" << std::endl;
    std::cin >> gcf2;

    std::cout << "Your GCF is: " << gcf(gcf1, gcf2) << std::endl;

    return 0;
}

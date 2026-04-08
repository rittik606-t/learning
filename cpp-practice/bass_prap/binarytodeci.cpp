#include <iostream>
#include <string>

int main()
{
    std::string binarynumber;
    int decimalnumber = 0;
    bool isvalid = true;

    std::cout << "Enter a binary number: ";
    std::cin >> binarynumber;


    if (binarynumber.empty())
    {
        std::cout << "Input is not provided" << std::endl;
    }
    else 
      {
        for (char ch : binarynumber)
        {
            if (ch != '0' && ch != '1')
            {
                isvalid =false;
                break;
            }
        }
        if(isvalid == false)
        {
            std::cout << "Invalid binary number" << std::endl;
        }
        else
        {
            for(char ch : binarynumber)
            {
                decimalnumber = decimalnumber * 2 +  (ch - '0');
            }
            std::cout << "decimal number: " << decimalnumber << std::endl;
        }
      }

    return 0;
}
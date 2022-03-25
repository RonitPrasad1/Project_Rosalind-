//Counting DNA Nucleotides:
#include <iostream>
#include <string>

auto main(int argc, const char* argv[]) -> decltype ( 0 )
{
    std::cout << "Sample Dataset: " << '\n';
    std::string DNAString; 
    std::cin >> DNAString;
    
    int64_t length = DNAString.size();
    
    int64_t cA = 0, cC = 0, cG = 0, cT = 0;
    for (int64_t i = 0; i < length; ++i)
    {
        if (DNAString[i] == 'A')
        {
            ++cA;
        }
        else if (DNAString[i] == 'C')
        {
            ++cC;
        }
        else if (DNAString[i] == 'G')
        {
            ++cG;
        }
        else if (DNAString[i] == 'T')
        {
            ++cT;
        }
    }
    
    std::cout << '\n';
    
    std::cout << "Sample Output is: " << '\n';
    std::cout << cA << " " << cC << " " << cG << " " << cT << " ";
    
    return 0;
}
//Counting DNA Nucleotides:
#include <iostream>
#include <string>

int main()
{
    std::cout << "Sample Dataset: " << '\n';
    std::string DNAString; 
    std::cin >> DNAString;
    
    int length = DNAString.size();
    
    int cA = 0, cC = 0, cG = 0, cT = 0;
    for (int i = 0; i < length; ++i)
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
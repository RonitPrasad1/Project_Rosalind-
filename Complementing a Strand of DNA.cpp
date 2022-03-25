//Complementing a Strand of DNA:
#include <iostream>
#include <string>
#include <algorithm>

auto main(int argc, const char* argv[]) -> decltype ( 0 )
{
    std::cout << "Sample Dataset: " << '\n';
    std::string strandofDNA;
    std::cin >> strandofDNA;
    
    int64_t length = strandofDNA.size();
    
    std::reverse(strandofDNA.begin(), strandofDNA.end());

    for (int64_t i = 0; i < length; ++i)
    {
        switch (strandofDNA[i])
        {
            case 'A':
                strandofDNA[i] = 'T';
                break;
            
            case 'C':
                strandofDNA[i] = 'G';
                break;
                
            case 'G':
                strandofDNA[i] = 'C';
                break;
                
            case 'T':
                strandofDNA[i] = 'A';
                break;
        }
    }
    
    std::cout << "Sample Output: " << '\n';
    std::cout << strandofDNA << '\n';
 
    return 0;
}
//Complementing a Strand of DNA:
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::cout << "Sample Dataset: " << '\n';
    std::string strandofDNA;
    std::cin >> strandofDNA;
    
    int length = strandofDNA.size();
    
    std::reverse(strandofDNA.begin(), strandofDNA.end());

    for (int i = 0; i < length; ++i)
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
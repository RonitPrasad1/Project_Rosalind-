//Transcribing DNA into RNA:
#include <iostream>
#include <string>

int main()
{
    std::cout << "Sample Dataset: " << '\n';
    std::string DNASequence;
    std::cin >> DNASequence;
    
    int length = DNASequence.size();
    
    for (int i = 0; i < length; ++i)
    {
        if (DNASequence[i] == 'T')
        {
            DNASequence[i] = 'U';
        }
    }
    
    std::cout << "Sample Output: " << '\n';
    for (int i = 0; i < length; ++i)
    {
        std::cout << DNASequence[i];
    }
 
    return 0;
}
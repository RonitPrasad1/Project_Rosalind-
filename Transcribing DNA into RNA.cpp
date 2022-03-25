//Transcribing DNA into RNA:
#include <iostream>
#include <string>

template <typename DataType>
inline auto solveTranscribing () -> void;

auto main(int argc, const char* argv[]) -> decltype ( 0 )
{
    solveTranscribing();
    
    return 0;
}

template <typename DataType>
inline auto solveTranscribing () -> void
{
    std::cout << "Sample Dataset: " << '\n';
    std::string DNASequence;
    std::cin >> DNASequence;
    
    int64_t length = DNASequence.size();
    
    for (int64_t i = 0; i < length; ++i)
    {
        if (DNASequence[i] == 'T')
        {
            DNASequence[i] = 'U';
        }
    }
    
    std::cout << "Sample Output: " << '\n';
    for (int64_t i = 0; i < length; ++i)
    {
        std::cout << DNASequence[i];
    }
}
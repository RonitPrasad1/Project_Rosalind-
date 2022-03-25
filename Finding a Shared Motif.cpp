//Finding a Shared Motif: Not Done
#include <iostream>
#include <string>

auto main(int argc, const char* argv[]) -> decltype ( 0 )
{
    std::cout << "Sample Dataset: " << '\n';
    std::string FASTAFormat, Motif;
    
    int64_t Cases;
    std::cin >> Cases;
    while (Cases--)
    {
        std::cin >> FASTAFormat;
        std::cin >> Motif;
        
        //std::cout << Motif << '\n';
    }
    
    std::cout << '\n';
    
    std::cout << "Sample Output: " << '\n';
    
    return 0;
}
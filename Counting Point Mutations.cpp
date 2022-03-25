//Counting Point Mutations:
#include <iostream>
#include <string>

auto main(int argc, const char* argv[]) -> decltype ( 0 )
{
    std::cout << "Sample Dataset: " << '\n';
    std::string s;
    std::cin >> s;
    
    std::string t;
    std::cin >> t;
    
    int64_t DNASize = s.size();
    
    int64_t Counter = 0;
    for (int64_t i = 0; i < Size(); ++i)
    {
        if (s[i] != t[i])
        {
            ++Counter;
        }
    }
    
    std::cout << "Sample Output: " << '\n';
    std::cout << Counter;
   
   return 0;
}
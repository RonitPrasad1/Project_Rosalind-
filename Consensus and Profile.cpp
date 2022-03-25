//Consensus and Profile: Not Done
#include <iostream>
#include <string>
#include <array>

static constexpr int64_t N = 7;
static constexpr int64_t M = 7;

auto main(int argc, const char* argv[]) -> decltype ( 0 )
{
    std::cout << "Sample Dataset: " << '\n';
    std::string Matrix[ N ][ M ];
    
    int64_t countA = 0, countC = 0, countG = 0, countT = 0; //Column Counters
    for (int64_t row = 0; row < N; ++row)
    {
        for (int64_t col = 0; col < M; ++col)
        {
            std::cin >> Matrix[row][col];
        }
    }
    
    std::cout << '\n';
     
    for (int64_t row = 0; row < N; ++row)
    {
        for (int64_t col = 0; col < M; ++col)
        {
            if (Matrix[col] == 'A')
            {
                ++countA;
            }
        
            if (Matrix[col] == 'C')
            {
                ++countC;
            }
        
            if (Matrix[col] == 'G')
            {
                ++countG;
            }
        
            if (Matrix[col] == 'T')
            {
                ++countT;
            }
        }
    }

    //std::cout << countA << " " << countC << " " << countG << " " << countT << " ";
    //Profile Matrix: 4-by-n = 28 cells
    
    std::cout << "Sample Output: " << '\n';
    for (int64_t row = 0; row < N; ++row)
    {
        for (int64_t col = 0; col < M; ++col)
        {
            std::cout << Matrix[ row ][ col ] << " ";
        }
        std::cout << '\n';
    }
    
    return 0;
}

//Not Done
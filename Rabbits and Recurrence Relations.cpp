//Rabbits and Recurrence Relations:
#include <iostream>

template <typename DataType>
inline auto Rabbits (DataType n, DataType k) -> int64_t;

auto main(int argc, const char* argv[]) -> decltype ( 0 )
{
    int64_t n, k;
    std::cin >> n >> k;
    
    std::cout << Rabbits(n, k) << " ";
    
    return 0;
}

template <typename DataType>
inline auto Rabbits (DataType n, DataType k) -> int64_t
{
    int64_t Large = 0, Small = 1, Larger, Smaller, Solution = 0;
    
    if (k == 0)
    {
        return 0;
    }
    
    for (int64_t i = 0; i < k; ++i)
    {
        Solution = Large + Small;
        
        Larger = Large + Small;
        Smaller = Large * n;
        
        Large = Larger;
        Small = Smaller;
    }
    return Solution;
}
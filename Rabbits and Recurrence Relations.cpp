//Rabbits and Recurrence Relations:
#include <iostream>

template <typename T>
T Rabbits (T n, T k)
{
    
    if (k == 0)
    {
        return 0;
    }
    
    long long int Large = 0, Small = 1, Larger, Smaller;
    
    int Solution = 0;
    for (long long int i = 0; i < k; ++i)
    {
        Solution = Large + Small;
        
        Larger = Large + Small;
        Smaller = Large * n;
        
        Large = Larger;
        Small = Smaller;
    }
    return Solution;
}

int main()
{
    long long int n, k;
    std::cin >> n >> k;
    
    std::cout << Rabbits(n, k) << " ";
    
    return 0;
}
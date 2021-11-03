//Enumerating Gene Orders:
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>

//static int i, v, Perm, LengthofString, counter = 0;

int main()
{
    std::cout << "Sample Dataset: " << '\n';
    std::string Ln;
    std::cin >> Ln;

    std::vector <int> BaseCase (0);
    std::vector <int> StoredVec (0);
    std::vector <std::vector <int>> SubCases (0);
    
    int Perm = std::stoi(Ln); // String to Number
    int LengthofString = Perm; //Size of String is Size of Iteration
    
    std::cout << '\n';
    for (int i = 1; i <= LengthofString; ++i) //Push in {n, n - 1, n - 2, . . ., 1}
    {
        BaseCase.push_back(i);
        //std::cout << i << " ";
    }
    
    //Counter for every iteration from {1 to n}
    do
    {
        for (auto it = BaseCase.begin(); it != BaseCase.end(); ++it)
        {
            //Push into another Vector:
            StoredVec.push_back(*it);
            //std::cout << *it << " ";
        }
    } while (std::next_permutation(BaseCase.begin(), BaseCase.end()));
    
    //Splitting into 3 Parts:
    int Parts = 120, Full = StoredVec.size(); //Parts = permutations, change based on given n:
    //120 in the case of N being 5
    
    auto iterator = StoredVec.begin();
    for (int i = 0; i < Parts; ++i)
    {
        auto pSize = Full / (Parts - i);
        Full -= pSize;
        
        SubCases.emplace_back(std::vector <int> {iterator, iterator + pSize});
        iterator += pSize;
    }
    
    std::cout << "Sample Output: " << '\n';
    int countChecks = 0;
    for (const auto& Outside : SubCases)
    {
        for (const auto& Inside : Outside)
        {
            ++countChecks;
            std::cout << Inside << " ";
        }
        std::cout << '\n';
    }
    
    std::cout << '\n';
    
    std::cout << "Number of Permutations is: " << '\n';
    
    int countPermutations = (countChecks / LengthofString); 
    std::cout << countPermutations;
    
    return 0;
}
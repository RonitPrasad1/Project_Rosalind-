//Translating RNA into Protein: Not Done
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <map>

template <typename Key, typename Value>
void printMap (std::map <Key, Value> const &mp);

// &.\"Translating RNA into Protein.exe"
auto main (int argc, const char* argv[]) -> decltype ( 0 )
{
    //File Handling:
    const char *fileName = "RNACodonTable.txt";
    std::ifstream file;
    file.open (fileName);
    
    std::string fT;
    std::string sT;
    
    std::string RNA;
    std::cout << "Sample Dataset: ";
    std::cin >> RNA;
    
    std::map <std::string, std::string> mp;
    while (file >> fT >> sT)
    {
        mp[fT] = sT;
    }
    
    std::cout << "Sample Output: " << '\n';

    for (int64_t it = 0; it < (RNA.length()); ++it)
    {
        //Ex: AUGGCCAUGGCGCCCAGAACUGAGAUCAAUAGUACCCGUAUUAACGGGUGA
        //Split string into 3's:
        
        //. . .
    }

    printMap(mp);
    
    file.close();
    return 0;   
}

template <typename Key, typename Value>
void printMap (std::map <Key, Value> const &mp)
{
    std::cout << "Key\tElement\n";
    for (auto it = mp.begin(); it != mp.end(); ++it)
    {
        std::cout << it -> first << '\t' << it -> second << '\n';
    }
}
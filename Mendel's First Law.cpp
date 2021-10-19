//Mendel's First Law:
#include <iostream>
#include <string>

int main()
{
    std::cout << "Sample Dataset: " << '\n';
    
    std::string RNA;
    std::cin >> RNA;
    
    int RNALength = RNA.size();
    for (int i = 0; i < RNALength; ++i)
    {
        if (RNA[i] == 'UUU' && RNA[i] == 'UUC')
        {
            RNA[i] = 'F';
        }
        else if (RNA[i] == 'UUA' && RNA[i] == 'UUG')
        {
            RNA[i] = 'L';
        }
        else if (RNA[i] == 'UCU' && RNA[i] == 'UCC' && RNA[i] == 'UCA' && RNA[i] == 'UCG' )
        {
            RNA[i] = 'S';
        }
        else if (RNA[i] == 'UAU' && RNA[i] == 'UAC')
        {
            RNA[i] = 'Y';
        }
        else if (RNA[i] == 'UAA' && RNA[i] == 'UAG' && RNA[i] == 'UGA')
        {
            RNA[i] = 'Stop';
        }
        else if (RNA[i] == 'UGU' && RNA[i] == 'UGC')
        {
            RNA[i] = 'C';
        }
        else if (RNA[i] == 'UGG')
        {
            RNA[i] = 'W';
        }
        else if (RNA[i] == 'CUU' && RNA[i] == 'CUC' && RNA[i] == 'CUA' && RNA[i] == 'CUG')
        {
            RNA[i] = 'L';
        }
        else if (RNA[i] == 'CCU' && RNA[i] == 'CCC' && RNA[i] == 'CCA' && RNA[i] == 'CCG')
        {
            RNA[i] = 'P';
        }
        else if (RNA[i] == 'CAU' && RNA[i] == 'CAC')
        {
            RNA[i] = 'H';
        }
        else if (RNA[i] == 'CAA' && RNA[i] == 'CAG')
        {
            RNA[i] = 'Q';
        }
        else if (RNA[i] == 'CGU' && RNA[i] == 'CGC' && RNA[i] == 'CGA' && RNA[i] == 'CGG')
        {
            RNA[i] = 'R';
        }
        else if (RNA[i] == 'AUU' && RNA[i] == 'AUC' && RNA[i] == 'AUA')
        {
            RNA[i] = 'I';
        }
        else if (RNA[i] == 'AUG')
        {
            RNA[i] = 'M';
        }
        else if (RNA[i] == 'ACU' && RNA[i] == 'ACC' && RNA[i] == 'ACA' && RNA[i] == 'ACG')
        {
            RNA[i] = 'T';
        }
        else if (RNA[i] == 'AAU' && RNA[i] == 'AAC')
        {
            RNA[i] = 'N';
        }
        else if (RNA[i] == 'AAA' && RNA[i] == 'AAG')
        {
            RNA[i] = 'K';
        }
        else if (RNA[i] == 'AGU' && RNA[i] == 'AGC')
        {
            RNA[i] = 'S';
        }
        else if (RNA[i] == 'AGA' && RNA[i] == 'AGG')
        {
            RNA[i] = 'R';
        }
        else if (RNA[i] == 'GUU' && RNA[i] == 'GUC' && RNA[i] == 'GUA' && RNA[i] == 'GUG')
        {
            RNA[i] = 'V';
        }
        else if (RNA[i] == 'GCU' && RNA[i] == 'GCC' && RNA[i] == 'GCA' && RNA[i] == 'GCG')
        {
            RNA[i] = 'A';
        }
        else if (RNA[i] == 'GAU' && RNA[i] == 'GAC')
        {
            RNA[i] = 'D';
        }
        else if (RNA[i] == 'GAA' && RNA[i] == 'GAG')
        {
            RNA[i] = 'E';
        }
        else if (RNA[i] == 'GGU' && RNA[i] == 'GGC' && RNA[i] == 'GGA' && RNA[i] == 'GGG')
        {
            RNA[i] = 'G';
        }
    }
        
    std::cout << "Sample Output: " << '\n';
    for (int i = 0; i < RNALength; ++i)
    {
        std::cout << RNA[i];
    }
   return 0;
}
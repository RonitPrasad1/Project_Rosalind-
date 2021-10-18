//Counting Point Mutations:
#include <iostream>
#include <string>

int main()
{
   std::cout << "Sample Dataset: " << '\n';
   std::string s;
   std::cin >> s;
   
   std::string t;
   std::cin >> t;
   
   int DNASize = s.size();
   
   int counter = 0;
   for (int i = 0; i < DNASize; ++i)
   {
       if (s[i] != t[i])
        {
            ++counter;
        }
   }
 
   std::cout << "Sample Output: " << '\n';
   std::cout << counter;
   
   return 0;
}
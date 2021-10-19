//Computing GC Content:
#include <iostream>
#include <string>

int main()
{
   double cases, GC_content = 0, total = 0, counter1 = 0, counter2 = 0;
   std::cin >> cases;
   
   std::string ID, DNAString;
   while (cases--)
   {
       std::cin >> ID;
       std::cin >> DNAString;
       
       int lengthofDNAStrand = DNAString.size();
       
       for (long long int i = 0; i < lengthofDNAStrand; ++i)
       {
           if (DNAString[i] == 'C')
           {
               ++counter1;
           }
           
           if (DNAString[i] == 'G')
           {
               ++counter2;
           }
           
           total = counter1 + counter2;
       }
       
       GC_content = total / lengthofDNAStrand;
       std::cout << (double) GC_content * 100.0 << " ";
   }
    return 0;
}
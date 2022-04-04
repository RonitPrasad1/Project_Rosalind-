//Computing GC Content:
#include <iostream>
#include <string>

auto main(int argc, const char* argv[]) -> decltype ( 0 )
{
   double cases, GC_content = 0, total = 0, counter1 = 0, counter2 = 0;
   std::cin >> cases;
   
   std::string ID, DNAString;
   while (cases--)
   {
       std::cin >> ID;
       std::cin >> DNAString;
       
       int64_t lengthofDNAStrand = DNAString.size();
       
       for (int64_t i = 0; i <= lengthofDNAStrand; ++i)
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
       
       GC_content = (total / lengthofDNAStrand);
       std::cout << static_cast <double> (GC_content * 100.0) << " ";
   }
    return 0;
}

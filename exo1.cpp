#include <iostream>
#include <map>
#include <string>
enum TaxMode {        tM_zero = 0,         tM_one = 1,         tM_two = 2,         tM_three = 3     };

void printM(std::map<std::string,std::string> testmap) {
    
  //if (testmap.empty()) std::cout << "No data" << std::endl;
    for (auto element: testmap)
      std::cout << element.first << " "<< element.second<< std::endl;
              
}

//std::string tmp = "roll";
//std::string& rtmp = tmp;

int main()
{
    std::map<std::string,TaxMode> testmap;
    testmap["tutu"] = tM_zero;
    
     std::map<std::string,std::string> strmap;
    
    printM(strmap);
    
    
}

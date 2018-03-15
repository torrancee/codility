#include <iostream>
#include <bitset>

int solution(int N) {

    std::string binString = std::bitset<32>(N).to_string();
   
    int longestGap = 0;
    int gap = 0;
    bool startCount = false;
    
    for(unsigned int i = 0; i < binString.length(); i++)
    {
       if(binString[i] == '1')
       {
           startCount = !startCount;
       }
       
       if(startCount && binString[i] == '0')
       {
           gap++;
       }
       else if(!startCount && binString[i] == '1')
       {
            if(gap>longestGap)
                longestGap = gap;
           gap = 0;
           startCount = true;
       }
    }
    
    return longestGap;
}


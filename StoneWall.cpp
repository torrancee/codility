#include <algorithm>
#include <stack>

int solution(vector<int> &H) {
    
    if(H.size() == 1)
        return 1;
        
    int noOfBlocks = 1;
    
    std::stack<int> bases;
    bases.push(H[0]);

    int globalMin = H[0];    

    for(unsigned int i = 1; i < H.size(); i ++){
        
        if(H[i] == bases.top())
            continue;
        else{
            
            if(H[i] < globalMin){
                noOfBlocks++;
                globalMin = H[i];
                
                std::stack<int> empty;
                std::swap( bases, empty );
                bases.push(H[i]);
            }
            else if(H[i] > H[i-1]){
                bases.push(H[i]);
                noOfBlocks++;}
            else if(H[i] < H[i-1]){
                
                while(H[i] < bases.top()){
                    bases.pop();}
                
                if(H[i] > bases.top()){
                    noOfBlocks++;
                    bases.push(H[i]);}
            }        
        }
    }
    
    return noOfBlocks;
}

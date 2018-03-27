#include <stack>
#include <utility>

int solution(vector<int> &A, vector<int> &B) {
    
    std::stack<std::pair<int,int>> fishes;
    std::pair<int,int> firstFish(A[0], B[0]);
    
    fishes.push(firstFish);
    
    for(unsigned int i = 1; i < A.size(); i++){
        
        if(B[i] == 1){
            fishes.push(std::pair<int,int>(A[i], B[i]));
            continue;
        }
        else if(fishes.top().second == 0){
            fishes.push(std::pair<int,int>(A[i], B[i]));
            continue;
        }  
        else{    
            while(fishes.top().second == 1){
                
                if(fishes.top().first > A[i])
                    break;
                else{
                    fishes.pop();
                    if(fishes.size() == 0 || fishes.top().second == 0)
                        fishes.push(std::pair<int,int>(A[i], B[i]));
                    }
            }
        }
    }
    
    return fishes.size();
}

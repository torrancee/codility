#include <set>

int solution(vector<int> &A) {
    
    std::set<int> mySet;
    for(auto tmp : A){
        mySet.insert(tmp);
    }
    
    return mySet.size();
}



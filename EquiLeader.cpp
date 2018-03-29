#include <stack>

int solution(vector<int> &A) {
    
    if(A.size() == 1)
        return 0;
    
    stack<int> leaderNumber;
    leaderNumber.push(A[0]);
    
    for(unsigned int i = 1; i < A.size(); i++){
        
        if(leaderNumber.size() == 0 || A[i] == leaderNumber.top()){
            leaderNumber.push(A[i]);}
        else{
            leaderNumber.pop();}
    }
    
    if(leaderNumber.size() == 0)
        return 0;
        
    int leader = leaderNumber.top();
    vector<unsigned int> noOfLeaderOccures(A.size(), 0);
    if(A[0] == leader)
        noOfLeaderOccures[0]++;
        
    for(unsigned int i = 1; i < A.size(); i++){
        noOfLeaderOccures[i] = noOfLeaderOccures[i-1];
        if(A[i] == leader)
            noOfLeaderOccures[i]++;
    }
    
    int noOfValidSlices = 0;
    unsigned int lastIndex = A.size() - 1;
    for(unsigned int i = 0; i < lastIndex; i++){
        
        if((noOfLeaderOccures[i] > (i+1)/2) && 
          ((noOfLeaderOccures[lastIndex] - noOfLeaderOccures[i]) > (lastIndex-i)/2)){
            noOfValidSlices++;
        }
    }
    
    return noOfValidSlices;
}





#include <set>

vector<int> solution(int N, vector<int> &A) {
    
    vector<int> counters(N,0);
    std::set<int> mySet; 
    int lastMax = 0;
    
    int maxNumber = 0;
    for(unsigned int i = 0; i < A.size(); i++)
    {
        if(A[i] > N)
        {
            mySet.clear();
            lastMax = maxNumber;
        }
        else
        {   
            int currentIndex = A[i] - 1;
            if(mySet.find(currentIndex) == mySet.end()){
                mySet.insert(currentIndex);
                counters[currentIndex] = lastMax + 1;
            }
            else{
                counters[currentIndex]++;
            }

            if(counters[currentIndex] > maxNumber)
                maxNumber = counters[currentIndex];
        }
    }

    for(auto &tmp : counters){
        if(tmp < lastMax)
            tmp = lastMax;
    }
    return counters;
}

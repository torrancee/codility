int solution(vector<int> &A) {
    
    float avg = (float)(A[0]+A[1])/2;
    std::pair<float, int> minAvgAndIndex(avg,0);
    for(unsigned int i = 1; i < A.size()-1; i++){
        
        float tmpAvg = (float)(A[i] + A[i+1])/2;
        if(tmpAvg < minAvgAndIndex.first){
            minAvgAndIndex.first =  tmpAvg;
            minAvgAndIndex.second = i;
        }
        
        float tmpAvg2 = (float)(A[i-1] + A[i] + A[i+1])/3;
        if(tmpAvg2 < minAvgAndIndex.first){
            minAvgAndIndex.first =  tmpAvg2;
            minAvgAndIndex.second = i-1;
        }
    }

    return minAvgAndIndex.second;
}

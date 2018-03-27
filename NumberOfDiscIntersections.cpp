int solution(vector<int> &A) {
    
    if(A.size() == 0 || A.size() == 1)
        return 0;
        
    long radiusRight = 0 + A[0];
    radiusRight = radiusRight > long(A.size()-1) ? A.size() - 1 : radiusRight;
    
    vector<int> howManyCirclesAchivedAPoint(A.size(), 0);
    for(long i = 0; i <= radiusRight; i++){
        howManyCirclesAchivedAPoint[i]++;
    }
    
    unsigned int pairs = 0;
    for(unsigned int i = 1; i < A.size(); i++){

        long radiusLeft = i - (long)A[i];
        radiusLeft = radiusLeft < 0 ? 0 : radiusLeft;
        
        long radiusRight = i + (long)A[i];
        radiusRight = radiusRight > (long)(A.size()-1) ? A.size() - 1 : radiusRight;

        pairs += howManyCirclesAchivedAPoint[radiusLeft];

        if(A[i] != 0){
            pairs += i - radiusLeft - 1;}
        
        if(pairs > 10000000)
            return -1;

        for(long k = i; k <= radiusRight; k++){
            howManyCirclesAchivedAPoint[k]++;
        }
    }
    
    return pairs;
}


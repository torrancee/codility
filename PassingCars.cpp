int solution(vector<int> &A) {

    long long pairs = 0;
    long long noOfZeros = 0;
    
    for(unsigned int i = 0; i < A.size(); i++){
        
        if(A[i] == 0){
            noOfZeros++;
        }
        else{
            pairs = pairs + noOfZeros;
        }
    }

    return pairs > 1000000000 ? -1 : pairs;
}

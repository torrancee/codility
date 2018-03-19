#include <math.h>

int solution(int X, int Y, int D) {

    int diff = Y - X;
    if(diff == 0)
        return 0;
    else{
        return ceil(double(diff)/double(D));
    }
}

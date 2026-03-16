#include "Summator.h"

int Summator::transform(int i){
    return i;
}

int Summator::sum(int N){
    int s = 0;
    for(int i = 1; i <= N; i++)
        s += transform(i);
    return s;
}

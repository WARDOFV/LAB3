#include <iostream>
#include "Summator.h"
#include "SquareSummator.h"
#include "CubeSummator.h"

int main(){

    int N;
    std::cout << "Enter N: ";
    std::cin >> N;

    Summator s;
    SquareSummator sq;
    CubeSummator cb;

    std::cout << "1 + ... + N = " << s.sum(N) << std::endl;
    std::cout << "1^2 + ... + N^2 = " << sq.sum(N) << std::endl;
    std::cout << "1^3 + ... + N^3 = " << cb.sum(N) << std::endl;

    return 0;
}

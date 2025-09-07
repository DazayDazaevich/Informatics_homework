#include "include/my_math.hpp"
#include <iostream>

int main() {
    double angle;
    std::cout << "Angle: "; 
    std::cin >> angle;
    
    AnswerHandler sin_result = my_sin(angle);
    AnswerHandler cos_result = my_cos(angle);
    AnswerHandler tan_result = my_tan(angle);
    
    std::cout << "sin(" << sin_result.x << ") = " << sin_result.result << std::endl;
    std::cout << "cos(" << cos_result.x << ") = " << cos_result.result << std::endl;
    std::cout << "tan(" << tan_result.x << ") = " << tan_result.result << std::endl;
    
    return 0;
}
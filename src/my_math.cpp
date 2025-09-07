#include "../include/my_math.hpp"
#include <cmath>

long long factorial(int n) {
    return (n == 0) ? 1 : n * factorial(n - 1);
}

AnswerHandler my_sin(double x) {
    AnswerHandler result;
    result.x = x;
    
    // sin(x) 
    double sin_value = 0;
    for (int n = 0; n < 10; n++) {
        double term = pow(-1, n) * pow(x, 2*n+1) / factorial(2*n+1);
        sin_value += term;
    }
    
    result.result = sin_value;
    return result;
}

AnswerHandler my_cos(double x) {
    AnswerHandler result;
    result.x = x;
    
    // cos(x)
    double cos_value = 0;
    for (int n = 0; n < 10; n++) {
        double term = pow(-1, n) * pow(x, 2*n) / factorial(2*n);
        cos_value += term;
    }
    
    result.result = cos_value;
    return result;
}

AnswerHandler my_tan(double x) {
    AnswerHandler result;
    result.x = x;
    
    AnswerHandler sin_result = my_sin(x);
    AnswerHandler cos_result = my_cos(x);
    
    result.result = sin_result.result / cos_result.result;
    return result;
}
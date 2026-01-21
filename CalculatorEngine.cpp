#include "CalculatorEngine.h"

double CalculatorEngine::add(double a, double b) const
{
    return a + b;
}

double CalculatorEngine::subtract(double a, double b) const
{
    return a - b;
}

double CalculatorEngine::multiply(double a, double b) const
{
    return a * b;
}

double CalculatorEngine::divide(double a, double b) const
{
    return (b != 0) ? (a / b) : 0.0;
}

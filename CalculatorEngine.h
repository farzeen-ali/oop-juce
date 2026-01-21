#pragma once
#include <juce_core/juce_core.h>

class CalculatorEngine
{
public:
    double add(double a, double b) const;
    double subtract(double a, double b) const;
    double multiply(double a, double b) const;
    double divide(double a, double b) const;
};

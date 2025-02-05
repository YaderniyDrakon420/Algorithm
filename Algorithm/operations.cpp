#include "operations.h"

int minchislo::operator()(const std::vector<int>& vector)
{
    return *std::min_element(vector.begin(), vector.end());
}

int maxchislo::operator()(const std::vector<int>& vector)
{
    return *std::max_element(vector.begin(), vector.end());
}

void zrostanya::operator()(std::vector<int>& vector)
{
    std::sort(vector.begin(), vector.end());
}

void spadanya::operator()(std::vector<int>& vector)
{
    std::sort(vector.begin(), vector.end(), std::greater<int>());
}

IncreaseBy::IncreaseBy(int value) : value(value) {}

void IncreaseBy::operator()(std::vector<int>& vector)
{
    for (int& num : vector)
    {
        num += value;
    }
}

DecreaseBy::DecreaseBy(int value) : value(value) {}

void DecreaseBy::operator()(std::vector<int>& vector)
{
    for (int& num : vector)
    {
        num -= value;
    }
}

RemoveValue::RemoveValue(int value) : value(value) {}

void RemoveValue::operator()(std::vector<int>& vector) const
{
    vector.erase(std::remove(vector.begin(), vector.end(), value), vector.end());
}

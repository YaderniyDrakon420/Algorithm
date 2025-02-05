#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <vector>
#include <algorithm>
#include <iostream>

template<typename T>
void print(const std::vector<T>& vector)
{
    for (const auto& item : vector)
        std::cout << item << ' ';
    std::cout << std::endl;
}

class minchislo
{
public:
    int operator()(const std::vector<int>& vector);
};

class maxchislo
{
public:
    int operator()(const std::vector<int>& vector);
};

class zrostanya
{
public:
    void operator()(std::vector<int>& vector);
};

class spadanya
{
public:
    void operator()(std::vector<int>& vector);
};

class IncreaseBy
{
private:
    int value;
public:
    IncreaseBy(int value);
    void operator()(std::vector<int>& vector);
};

class DecreaseBy
{
private:
    int value;
public:
    DecreaseBy(int value);
    void operator()(std::vector<int>& vector);
};

class RemoveValue
{
private:
    int value;
public:
    RemoveValue(int value);
    void operator()(std::vector<int>& vector) const;
};

#endif 


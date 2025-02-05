#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <vector>
#include <algorithm>
#include <iostream>

template<typename Container>
void print(const Container& container);

template <typename Container>
class MinElement
{
public:
    auto operator()(const Container& container) -> decltype(*container.begin());
};

template <typename Container>
class MaxElement
{
public:
    auto operator()(const Container& container) -> decltype(*container.begin());
};

template <typename Container>
class SortAscending
{
public:
    void operator()(Container& container);
};

template <typename Container>
class SortDescending
{
public:
    void operator()(Container& container);
};

template <typename Container, typename T>
class IncreaseBy
{
private:
    T value;
public:
    IncreaseBy(T val);
    void operator()(Container& container);
};

template <typename Container, typename T>
class DecreaseBy
{
private:
    T value;
public:
    DecreaseBy(T val);
    void operator()(Container& container);
};

template <typename Container, typename T>
class RemoveValue
{
private:
    T value;
public:
    RemoveValue(T val);
    void operator()(Container& container);
};

#endif 




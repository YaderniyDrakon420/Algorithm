#include "operations.h"

template <typename Container>
auto MinElement<Container>::operator()(const Container& container) -> decltype(*container.begin())
{
    return *std::min_element(container.begin(), container.end());
}

template <typename Container>
auto MaxElement<Container>::operator()(const Container& container) -> decltype(*container.begin())
{
    return *std::max_element(container.begin(), container.end());
}

template <typename Container>
void SortAscending<Container>::operator()(Container& container)
{
    std::sort(container.begin(), container.end());
}

template <typename Container>
void SortDescending<Container>::operator()(Container& container)
{
    std::sort(container.begin(), container.end(), std::greater<typename Container::value_type>());
}

template <typename Container, typename T>
IncreaseBy<Container, T>::IncreaseBy(T val) : value(val) {}

template <typename Container, typename T>
void IncreaseBy<Container, T>::operator()(Container& container)
{
    for (auto& num : container)
    {
        num += value;
    }
}

template <typename Container, typename T>
DecreaseBy<Container, T>::DecreaseBy(T val) : value(val) {}

template <typename Container, typename T>
void DecreaseBy<Container, T>::operator()(Container& container)
{
    for (auto& num : container)
    {
        num -= value;
    }
}

template <typename Container, typename T>
RemoveValue<Container, T>::RemoveValue(T val) : value(val) {}

template <typename Container, typename T>
void RemoveValue<Container, T>::operator()(Container& container)
{
    container.erase(std::remove(container.begin(), container.end(), value), container.end());
}

template <typename Container>
void print(const Container& container)
{
    for (const auto& item : container)
        std::cout << item << ' ';
    std::cout << std::endl;
}

template class MinElement<std::vector<int>>;
template class MaxElement<std::vector<int>>;
template class SortAscending<std::vector<int>>;
template class SortDescending<std::vector<int>>;
template class IncreaseBy<std::vector<int>, int>;
template class DecreaseBy<std::vector<int>, int>;
template class RemoveValue<std::vector<int>, int>;

template void print<std::vector<int>>(const std::vector<int>&);



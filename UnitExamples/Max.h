#ifndef MAX_H
#define MAX_H

template< int LEFT, int RIGHT>
struct Max
{
    enum { value = (LEFT < RIGHT) ? RIGHT : LEFT };
};

//Other way find the max.

template <class T>
constexpr const T& max(const T& l, const T& r)
{
    return (l < r) ? r : l;
}

#endif // MAX_H
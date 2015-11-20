#ifndef IF_H
#define IF_H

template <bool, class L, class R> struct IF             { typedef R type; };
template <      class L, class R> struct IF<true, L, R> { typedef L type; };

template <class T, unsigned int CAPACITY>
class Queue
{
    typename IF<(CAPACITY <= 256), unsigned char, unsigned int>::type size;
};

#endif // IF_H

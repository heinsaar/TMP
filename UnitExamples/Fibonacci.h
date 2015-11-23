#ifndef FIBONACCI_H
#define FIBONACCI_H

template<int N>
struct Fibonacci
{
	enum { result = Fibonacci<N - 1>::result + Fibonacci<N - 2>::result };
};

template<>
struct Fibonacci<1>
{
	enum { result = 1 };
};

template<>
struct Fibonacci<0>
{
	enum { result = 0 };
};

#endif // FIBONACCI_H
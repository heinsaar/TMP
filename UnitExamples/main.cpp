#include "Factorial.h"
#include "If.h"
#include "Fibonacci.h"
#include "Loop.h"
#include "Max.h"

#include <iostream>

int main()
{
    // Compile-time max
    std::cout << "Max<7,2> = " << Max<7, 2>::value << "\n";
    
    // Compile-time max another way
    std::cout << "max(10,18) = " << max(10, 18) << "\n";

    // Compile-time factorial
    std::cout << "Factorial(7) = " << Factorial<7>::value << "\n";

    // Compile-time fibonacci
    std::cout << "Fibonacci(10) = " << Fibonacci<10>::result << "\n";

    // Compile-time loop   
    LOOP<6>::EXEC();

    // Compile-time if statement
    Queue<int, 10>   q_char;
    Queue<int, 1000> q_int;
    std::cout << sizeof(q_char) << " " << sizeof(q_int) << '\n';
    
    std::cout << "\n";
}

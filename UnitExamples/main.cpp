#include "Factorial.h"
#include "If.h"
#include "Loop.h"
#include "Max.h"

#include <iostream>

int main()
{
    // Compile-time max.
    std::cout << Max<7, 2>::value << "\n";
    
    // Or in other way.
    std::cout << max(10, 18) << "\n";

    // Compile-time factorial.    
    std::cout << Factorial<7>::value << "\n";

    // Compile-time loop.    
    LOOP<6>::EXEC();

    // Compile-time if statement.    
    Queue<int, 10>   q_char;
    Queue<int, 1000> q_int;
    std::cout << sizeof(q_char) << " " << sizeof(q_int) << '\n';
    
    std::cout << "\n";
}

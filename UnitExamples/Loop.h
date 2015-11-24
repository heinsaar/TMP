#ifndef LOOP_H
#define LOOP_H

template<int COUNT>
struct LOOP
{
    static void EXEC()
    {
        LOOP<COUNT - 1>::EXEC();
    }
};

template<>
struct LOOP<0>
{
    static void EXEC()
    {
        // Recursion base; do nothing, just stop.
    }
};

#endif // LOOP_H

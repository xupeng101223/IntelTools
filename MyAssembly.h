#pragma once

#ifdef _MSC_VER
/*
*WINDOWS下提供的一系列可以直接映射到处理器的指令，程序员得以不需要编写汇编语言
*/
#include <intrin.h>
#else
inline void __cpuid(int cpuinfo[4], int info) {
        __asm__ __volatile__(
                "cpuid":
                "=a"(cpuinfo[0]), "=b"(cpuinfo[1]), "=c"(cpuinfo[2]), "=d"(cpuinfo[3]) :
                "a"(info)
                );
}
#endif
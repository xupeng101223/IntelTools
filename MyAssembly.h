#pragma once

#ifdef _MSC_VER
/*
*WINDOWS���ṩ��һϵ�п���ֱ��ӳ�䵽��������ָ�����Ա���Բ���Ҫ��д�������
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
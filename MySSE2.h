#pragma once
#include "MyAssembly.h"

inline bool IsSupportSSE2() {
        int cpuinfo[4];
        __cpuid(cpuinfo, 1);
        return cpuinfo[3] & (1 << 26);
}
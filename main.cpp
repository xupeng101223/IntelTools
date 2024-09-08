#include"MySSE2.h"
#include<iostream>

int main() {
        if (IsSupportSSE2()) {
                std::cout << "SSE2 is supported." << std::endl;
        }
        else {
                std::cout << "SSE2 is not supported." << std::endl;
        }

        return 0;
}
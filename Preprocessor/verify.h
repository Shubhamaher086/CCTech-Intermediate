#pragma once
#ifndef verify
#define verify(cond)\
    do{\
        if(!(cond))\
            std::cerr << __FILE__ << ":" << __LINE__ << " In function main(), verification of condition \""<<#cond<<"\" failed.\n";\
    } while (0)
#endif
#ifndef SOURCE_CODE_H
#define SOURCE_CODE_H

#ifdef __cplusplus
#include <iostream>
#else
#include <stdint.h>
#include <stdbool.h>
#endif

// Function declaration for C
#ifdef __cplusplus
extern "C" {
#endif

int c_function(int arg);

#ifdef __cplusplus
}
#endif

// Class declaration for C++
#ifdef __cplusplus
class source_code
{
private:
    /* data */
public:
    source_code(/* args */);
    ~source_code();
};
#endif


#endif /*SOURCE_CODE_H*/

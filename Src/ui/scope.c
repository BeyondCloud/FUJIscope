#include "scope.h"
#include <math.h>

#define max(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })
#define min(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a < _b ? _a : _b; })

scope_t scope;
int ADC_Vmax=3;


int clamp(int x, int lower, int upper)
{
    return min(upper, max(x, lower));
}


 

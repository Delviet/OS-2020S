#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    int intNum = INT_MAX;
    float floatNum = FLT_MAX;
    double doubleNum = DBL_MAX;
    printf("Integer: %d %d\n", intNum, sizeof(intNum));
    printf("Float: %f %d\n", floatNum, sizeof(floatNum));
    printf("Double: %f %d", doubleNum, sizeof(doubleNum));
    return 0;
}

#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"
int main(void){
    const int N = 40;
    float StartTime = (float)clock()/CLOCKS_PER_SEC;
    for (unsigned int i = 0; i < N; i++) {
        fibonacciRecursive(i);
    }

    float EndTime = (float)clock()/CLOCKS_PER_SEC;
    double TotalTime = EndTime - StartTime;

    printf("Total time for Recursive approach with N = %d is: %f s\n", N, TotalTime);

    return 0;
}

#include "libstaticlibtest_api.h"
#include "calc_mean.h"



int main()
{
    //If you comment out the following two lines using the kotlin lib it will compile it run
    //libstaticlibtest_kref_co_test_test s = libstaticlibtest_symbols()->kotlin.root.co.test.test.test();
    //libstaticlibtest_symbols()->kotlin.root.co.test.test.callMe(s);
    
    double v1, v2, m;
    v1 = 5.2;
    v2 = 7.9;
    
    m  = mean(v1, v2);
    
    printf("The mean of %3.2f and %3.2f is %3.2f\n", v1, v2, m);
    
    return 0;
}

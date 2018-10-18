
#include "libstaticlibtest_api.h"


int main(int argc, char *argv[])
{
    libstaticlibtest_kref_co_test_test s = libstaticlibtest_symbols()->kotlin.root.co.test.test.test();
    libstaticlibtest_symbols()->kotlin.root.co.test.test.callMe(s);
    
    return 0;
}

// ucp_helloworld.cpp
//
//     Created: 21-AUG-2015
// Last Update: 01-SEP-2015

#define VER 3

#include "stdio.h"
#include "../ulp_libfunc/libfunc.h"
#include "../ulp_libclass/libclass.h"


#ifdef _DEBUG
  #include "__build_num_debug.h"
  char gszBuildType[] = "Debug";
#else
  #include "__build_num_release.h"
  char gszBuildType[] = "Release";
#endif


int main(int argc, char* argv[])
{
    char szBuf[128];
    x x1(100, 200); // create object x1

    printf("ucp_helloworld - Ver %d (%s) Build %d (Built: %s %s)\n", VER, gszBuildType, BUILD_NUM, __DATE__, __TIME__);

    getLibFuncBuildInfo(szBuf, 128);
    printf("  Using ulp_libfunc:  %s\n", szBuf);

    getLibClassBuildInfo(szBuf, 128);
    printf("  Using ulp_libclass: %s\n", szBuf);

    printf("wlp_libfunc - lib_test_incr_num(101) = %d\n", lib_test_incr_num(101));
    printf("wlp_libfunc - lib_test_decr_num(101) = %d\n", lib_test_decr_num(101));

    x1.setb(222);
    printf("wlp_libclass - x.display():\n");
    x1.display();

    printf("Press ENTER to exit . . .");
    getchar();

    return 0;
}

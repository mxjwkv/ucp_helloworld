# lin_build.sh
#     Created: 02-AUG-2012
# Last Update: 03-SEP-2015
../../ucx_incrbuildnum.out __build_num_release -L
g++ -o ucp_helloworld.out ucp_helloworld.cpp -L../lib -lulp_libclass -L../lib -lulp_libfunc

CC=mpicxx -std=c++11 -O2 -g -fPIC
GSL_LIBS=-lgsl -lgslcblas
LAPACK_LIBS=-lopenblas 
SCALAPACK_LIBS= -lscalapack
LDLIBS=${GSL_LIBS} ${LAPACK_LIBS} ${SCALAPACK_LIBS}

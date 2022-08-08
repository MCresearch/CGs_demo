#include <iostream>
#include "vector3.h"
#include "matrix.h"

int main() {

  // init matrix
  const int nrows = 3, ncols = 3;
  ModuleBase::matrix m1(nrows, ncols, true);
  ModuleBase::matrix m2(nrows, ncols, true);
  for (int ii = 0; ii < nrows; ii++) {
    for (int jj = 0; jj < ncols; jj++) {
      m1(ii, jj) = 1;
      m2(ii, jj) = 2;
    }
  }

  ModuleBase::matrix m3 = m1 + m2;
  ModuleBase::matrix m4 = m1 * m2;

  std::cout<< "matrix m1:" << std::endl; 
  m1.print(std::cout);
  std::cout<< "matrix m2:" << std::endl; 
  m2.print(std::cout);
  std::cout<< "matrix m1 + m2:" << std::endl; 
  m3.print(std::cout);
  std::cout<< "matrix m1 * m2:" << std::endl; 
  m4.print(std::cout);
}
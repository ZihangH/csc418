#include "signed_incidence_matrix_sparse.h"
#include <vector>

void signed_incidence_matrix_sparse(
  const int n,
  const Eigen::MatrixXi & E,
  Eigen::SparseMatrix<double>  & A)
{
  //////////////////////////////////////////////////////////////////////////////
  // Replace with your code
  std::vector<Eigen::Triplet<double> > ijv;
  A.resize(E.rows(),n);
  
  for(int i = 0; i < E.rows(); i++){
    for(int j = 0; j < n; j++){
      if(j == E(i, 0)){
        ijv.emplace_back(i, j, 1.0);
      }else if(j == E(i, 1)){
        ijv.emplace_back(i, j, -1.0);
      }
    }
  }
  A.setFromTriplets(ijv.begin(),ijv.end());
  //////////////////////////////////////////////////////////////////////////////
}
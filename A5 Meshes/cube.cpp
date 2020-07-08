#include "cube.h"

void cube(
  Eigen::MatrixXd & V,
  Eigen::MatrixXi & F,
  Eigen::MatrixXd & UV,
  Eigen::MatrixXi & UF,
  Eigen::MatrixXd & NV,
  Eigen::MatrixXi & NF)
{
  ////////////////////////////////////////////////////////////////////////////
  // Add your code here:
  ////////////////////////////////////////////////////////////////////////////

  ////Hint:
  V.resize(8,3);
  F.resize(6,4);
  UV.resize(14,2);
  UF.resize(6,4);
  NV.resize(6,3);
  NF.resize(6,4);

  V << 0, 0, 0,
       1, 0, 0,
       1, 1, 0,
       0, 1, 0,
       0, 0, 1,
       1, 0, 1,
       1, 1, 1,
       0, 1, 1;

  F << 0, 1, 2, 3,
       0, 1, 5 ,4,
       0, 4, 7, 3,
       6, 5, 1, 2,
       6, 7, 3, 2,
       6, 5, 4, 7;
  
  UV << 0.25, 0,
        0.5, 0,
        0.5, 0.25,
        0.75, 0.25,
        1, 0.25,
        1, 0.5,
        0.75, 0.5,
        0.5, 0.5,
        0.5, 0.75,
        0.25, 0.75,
        0.25, 0.5,
        0, 0.5,
        0, 0.25,
        0.25, 0.25;

  UF << 7, 10, 13, 2,
        10, 11, 12, 13,
        7, 8, 9, 10,
        0, 1, 2, 13,
        2, 3, 6, 7,
        3, 4, 5, 6;
  
  NV << 1, 0, 0,
        -1, 0, 0,
        0, 1, 0,
        0, -1 ,0,
        0, 0, -1,
        0, 0, 1;

  NF << 0, 0, 0, 0,
        1, 1, 1, 1,
        2, 2, 2, 2,
        3, 3, 3, 3,
        4, 4, 4, 4,
        5, 5, 5, 5;
        
        
}
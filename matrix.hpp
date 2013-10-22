#ifndef __MATRIX_HPP_
#define __MATRIX_HPP_
#include "UMatrix.hpp"
#include "UVector.hpp"

Mat eye(size_t n_rows, size_t n_cols);
Vec linspace(double start, double end, size_t N);

Vec linspace(double start, double end, size_t N)
{
	Vec v(N);
	
	return v;
}

Mat eye(size_t n_rows, size_t n_cols)
{
	return Mat(n_rows,n_cols,matrix_fill::eye);
}

#endif
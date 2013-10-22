#ifndef __UMATRIX_HPP_
#define __UMATRIX_HPP_
#include "include.h"

using namespace boost::numeric::ublas;

class Mat {
public:
	Mat()
	{
		_m = matrix<double>();
		m_Rows = m_Cols = 0;
	}
	
	Mat(size_t n_rows,size_t n_cols,matrix_fill::fill f= matrix_fill::none)
	{
		m_Rows = n_rows;
		m_Cols = n_cols;
		
		switch(f)
		{
			case matrix_fill::zeros:
				_m = zero_matrix<double>(m_Rows,m_Cols);
				break;
			case matrix_fill::ones:
				_m = scalar_matrix<double>(m_Rows,m_Cols,1);
				break;
			case matrix_fill::eye:
				_m = identity_matrix<double>(m_Rows,m_Cols);
				break;
			case matrix_fill::none:
				_m = matrix<double>(n_rows,n_cols);
				break;
				
		}
	}
	
	/**
	 	@brief returns the k-th diagonal in the matrix
	 	@return the diagonal
	 	@note only defined for square matrices
	 */
	Vec diag()
	{
		int k=0;
		Vec d;
		
		return d;
	} 
	

private:
	matrix<double> _m;		/*!< matrix member */
	size_t m_Rows;
	size_t m_Cols;
};



#endif
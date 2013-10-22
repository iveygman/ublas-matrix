#include <boost/numeric/ublas/assignment.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/io.hpp>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/operation.hpp>
#include <boost/numeric/ublas/triangular.hpp>
#include <boost/numeric/ublas/lu.hpp>
#include <boost/numeric/ublas/exception.hpp>
#include <boost/numeric/ublas/storage.hpp>
#include <boost/numeric/ublas/hermitian.hpp>
#include <boost/numeric/ublas/banded.hpp>
#include <boost/numeric/ublas/blas.hpp>

class Mat;
class Vec;

namespace matrix_fill
{
	enum fill
	{
		zeros,
		ones,
		eye,
		randu,	/*!< uniform on 0,1 */
		randn,	/*!< normal distribution */
		randc,	/*!< chi-2 distribution */
		none
	};
}

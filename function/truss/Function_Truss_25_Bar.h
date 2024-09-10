/*
 * Function_Truss_25_Bar.h
 *
 *  Created on: 21/05/2012
 *      Author: krempser
 */

#ifndef FUNCTION_TRUSS_25_BAR_H_
#define FUNCTION_TRUSS_25_BAR_H_

#include "Truss_Bar_Structure_Static_Problem.h"

namespace opt {
namespace function {
namespace truss {

class Function_Truss_25_Bar  : public Truss_Bar_Structure_Static_Problem{
private:
    int* grouping;
public:
	Function_Truss_25_Bar();
	Function_Truss_25_Bar(Function_Truss_25_Bar& orig);

	virtual void evaluation(void* vector, void* values);

	virtual ~Function_Truss_25_Bar();

protected:
	virtual int* const getGrouping();
};

} /* namespace truss */
} /* namespace function */
} /* namespace opt */
#endif /* FUNCTION_TRUSS_25_BAR_H_ */
/*
 * Operator_MT_DE_Best.h
 *
 *  Created on: 09/02/2012
 *      Author: Eduardo Krempser
 */

#ifndef OPERATOR_MT_DE_BEST_H_
#define OPERATOR_MT_DE_BEST_H_

#include "Operator.h"

namespace opt {
namespace operators {

	class Operator_MT_DE_Best: public Operator {
		public:
			Operator_MT_DE_Best();
			//The index of best individual in the population must be indicated
			virtual int apply(vector<IndividualPtr> parent, vector<IndividualPtr> &offspring);

			//Apply operator with setted parameter
			virtual int apply(vector<IndividualPtr> parent, vector<IndividualPtr> &offspring, double param);

			//Apply operator with the index of the parents
			virtual int apply(vector<IndividualPtr> parent, vector<IndividualPtr> &offspring, double param, vector<int> index);

			//Select parents with the same mechanism of the application
			virtual vector<int> selectParents(vector<IndividualPtr> pop);
	};

} /* namespace operators */
} /* namespace opt */
#endif /* OPERATOR_MT_DE_BEST_H_ */

#ifndef PARAMETRICTUPLETEST_H_
#define PARAMETRICTUPLETEST_H_ 

#include <gtest/gtest.h>
#include <tr1/tuple>
#include "parametric.h"

class parametricTupleTest : public ::testing::TestWithParam<std::tr1::tuple<bool,int> > {
protected:
	parametric* sut;
	void SetUp();
	void TearDown();

public:
	parametricTupleTest();
	virtual ~parametricTupleTest();

};

#endif

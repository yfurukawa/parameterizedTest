#include "IsEvenParametricTest2.h"

TEST_P (IsEvenParametricTest2, testNameIsHere_ChangeThis) {
/* Write a test code here. */
	const bool expect = std::tr1::get<0>(GetParam());
	const int num = std::tr1::get<1>(GetParam());
	EXPECT_EQ(expect, sut->isEven(num));
}

INSTANTIATE_TEST_CASE_P(EvenTest, IsEvenParametricTest2,
	testing::Values(
		std::tr1::make_tuple(true, 2),
		std::tr1::make_tuple(false, 3))
);


#include "IsEvenParametricTest.h"

TEST_P (IsEvenParametricTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */
	EXPECT_EQ(true, sut->isEven(GetParam()));
}

INSTANTIATE_TEST_CASE_P(EvenTest, IsEvenParametricTest,
	testing::Values(2, 4)
);


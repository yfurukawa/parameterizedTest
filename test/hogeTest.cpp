#include "hogeTest.h"

hogeTest::hogeTest() {

}

hogeTest::~hogeTest() {

}

void hogeTest::SetUp() {
	sut = new hoge();
}

void hogeTest::TearDown() {
	delete sut;
}

TEST_F (hogeTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */
	EXPECT_EQ(true, sut->isEven(2));
}

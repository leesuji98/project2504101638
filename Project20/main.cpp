#include "gmock/gmock.h"

class Cal {
public:
	int getGop(int a, int b)
	{
		return a * b;
	}
};

TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(t1, GopTest)
{
	Cal stCal;

	EXPECT_EQ(10, stCal.getGop(2, 5));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
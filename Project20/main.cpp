#include "gmock/gmock.h"

class Cal {
public:
	int getMinus(int a, int b) {
		return a - b;
	}
};

TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(t1, GetMinusTest) {
	Cal c;
	int expected = 4;
	int actual = c.getMinus(10, 6);
	EXPECT_EQ(expected, actual);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
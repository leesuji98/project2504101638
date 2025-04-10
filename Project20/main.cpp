#include "gmock/gmock.h"

class Cal {
public:
	Cal() {};
	int getDivide(int a, int b) {
		if (b == 0)
			return -1;
		return a / b;
	}
};

TEST(t1, Divide1) {
	Cal c1;
	EXPECT_EQ(-1, c1.getDivide(1, 0));
}

TEST(t1, Divide2) {
	Cal c1;
	EXPECT_EQ(5, c1.getDivide(10, 2));
}

TEST(t1, Divide3) {
	Cal c1;
	EXPECT_EQ(3, c1.getDivide(9, 3));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}

#include "gmock/gmock.h"

class Cal {
public:
	int getZegop(int a) {
		return (a * a);
	}
};

TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(t1, zegop) {
	Cal cal;
	int ret = cal.getZegop(10);
	EXPECT_EQ(100, ret);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
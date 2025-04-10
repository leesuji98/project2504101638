#include "gmock/gmock.h"

class Cal {
public:
	Cal() {};
  
	int getDivide(int a, int b) {
		if (b == 0)
			return -1;
		return a / b;
	}
  
	int getSum(int a, int b) {
		return a + b;
	}

	int getZegop(int a) {
		return (a * a);
	}
  
	int getMinus(int a, int b) {
		return a - b;
	}

	int getGop(int a, int b)
	{
		return a * b;
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

TEST(t1, sumTest) {
	Cal cal;
	EXPECT_EQ(3, cal.getSum(1, 2));
}

TEST(t1, GetMinusTest) {
	Cal c;
	int expected = 4;
	int actual = c.getMinus(10, 6);
	EXPECT_EQ(expected, actual);
}

TEST(t1, zegop1) {
	Cal cal;
	int actual = cal.getZegop(10);
	EXPECT_EQ(100, actual);
}

TEST(t1, zegop2) {
	Cal cal;
	int actual = cal.getZegop(-100);
	EXPECT_EQ(10000, actual);
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


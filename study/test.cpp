#include "pch.h"


#ifdef __cplusplus

extern "C"


#endif // __cplusplus

#ifdef __cplusplus

#endif


TEST(TestCaseName, TestName) {

	int d;
	int e;
	int f;
	d = 2;
	e = 3;

	f = add_fun(d,e);
  EXPECT_EQ(f, 5);
  //EXPECT_TRUE(true);
}
#include "unity.h"
#include "cal.h"

void setUp()
{
}

void tearDown()
{
}

void test_add()
{
    int n1;
    int n2;
    int actual_result;
    TEST_ASSERT_EQUAL(add(n1,n2),actual_result);
}
int test_main()
{
    UNITY_BEGIN();
     RUN_TEST(test_add);
     return UNITY_END();
}

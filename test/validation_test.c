#include "deposit.h"
#include "ctest.h"

CTEST(validation_test_deposit_5000, simple_val_sum)
{
    const int a = 5000;
    const int result = check_sum(a);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(validation_test_deposit_minus_5000, simple_val_sum2)
{
    const int a = -5000;
    const int result = check_sum(a);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(validation_test_day_minus_10, simple_val_day)
{
    const int a = -10;
    const int result = check_data(a);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(validation_test_day_400, test_val_day2)
{
    const int a = 400;
    const int result = check_data(a);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(validation_test, simple_val)
{
    const int a = 0;
    const int b = 0;
    const int result = check(a, b);
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}
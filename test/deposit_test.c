#include "deposit.h"
#include "ctest.h"

CTEST(test_deposit_10000, simple_sum)
{
    // Given
    const int a = 10000;

    // When
    const int result = check_sum(a);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(test_deposit_100000, simple_sum2)
{
    const int a = 100000;
    const int result = check_sum(a);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(test_data_20, simple_day)
{
    const int a = 20;
    const int result = check_data(a);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(test_data_300, simple_day2)
{
    const int a = 300;
    const int result = check_data(a);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(test_deposit_150000_and_day_300, simple)
{
    const int a = 150000;
    const int b = 300;
    const int result = check(a, b);
    const int expected = a * 115 / 100;
    ASSERT_EQUAL(expected, result);
}
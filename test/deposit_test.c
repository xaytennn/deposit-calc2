#include <deposit.h>
#include <ctest.h>

CTEST(check_input_data_deposit, good1)
{
    // Given
    const int a = 10000;

    // When
    const int result = checkS(a);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_input_data_deposit, good2)
{
    const int a = 100000;
    const int result = checkS(a);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_input_data_days, good1)
{
    const int a = 20;
    const int result = checkD(a);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_input_data_days, good2)
{
    const int a = 300;
    const int result = checkD(a);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_input_data_summ, good)
{
    const int a = 150000;
    const int b = 300;
    const int result = check(a, b);
    const int expected = a * 115 / 100;
    ASSERT_EQUAL(expected, result);
}
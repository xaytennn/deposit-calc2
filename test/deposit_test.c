#include <deposit.h>
#include <ctest.h>

CTEST(suite, simle)
{
    // Given
    const int a = 10000;

    // When
    const int result = checkS(a);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite, simle2)
{
    const int a = 100000;
    const int result = checkS(a);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite, simle3)
{
    const int a = 20;
    const int result = checkD(a);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite, simle4)
{
    const int a = 300;
    const int result = checkD(a);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite, simle5)
{
    const int a = 150000;
    const int b = 300;
    const int result = check(a, b);
    const int expected = a * 115 / 100;
    ASSERT_EQUAL(expected, result);
}
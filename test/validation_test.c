#include <deposit.h>
#include <ctest.h>

CTEST(suite, bad)
{
    const int a = 5000;
    const int result = checkS(a);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite, bad2)
{
    const int a = -5000;
    const int result = checkS(a);
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite, bad3)
{
    const int a = -10;
    const int result = checkD(a);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite, bad4)
{
    const int a = 400;
    const int result = checkD(a);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite, bad5)
{
    const int a = 0;
    const int b = 0;
    const int result = check(a, b);
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}
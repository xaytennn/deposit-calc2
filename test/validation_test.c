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
    const int expected = 0;
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
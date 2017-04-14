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
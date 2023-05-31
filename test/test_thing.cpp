#include <gtest/gtest.h>

#include "lib/thing.h"

TEST(HelloTest, BasicAssertions) {

    Thing test_thing;
    // Call doStuff, which should pass the test
    uint8_t result = test_thing.doStuff();

    // Expect equality.
    EXPECT_EQ(result, 2);
}

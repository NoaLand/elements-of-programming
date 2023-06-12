#include "gtest/gtest.h"

#include "cstring"
#include "chapter1.h"

TEST(representational_equality, A_and_B_should_not_be_representational_equality_when_their_fields_are_in_different_sort) {
    struct A left = {
            .a = 1,
            .b = 2,
            .c = 3
    };

    struct B right = {
            .c = 3,
            .b = 2,
            .a = 1
    };

    auto res = memcmp(&left, &right, sizeof(struct A));
    ASSERT_NE(res, 0) << "left and right should not be representational equality, since they have different binary combination";
}
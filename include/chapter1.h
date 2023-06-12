#ifndef ELEMENTS_OF_PROGRAMMING_CHAPTER1_H
#define ELEMENTS_OF_PROGRAMMING_CHAPTER1_H

struct representational_equality_verification_left {
    int a;
    int b;
    int c;
};

struct representational_equality_verification_right {
    int c;
    int b;
    int a;
};

class representational_equality_verification_left_class {
    int a;
    int b;
    int c;
public:
    representational_equality_verification_left_class(int a, int b, int c): a{a}, b{b}, c{c} {};
};

class representational_equality_verification_right_class {
    int c;
    int b;
    int a;
public:
    representational_equality_verification_right_class(int c, int b, int a): c{c}, b{b}, a{a} {};
};
#endif //ELEMENTS_OF_PROGRAMMING_CHAPTER1_H

include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.12.0
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(
        elements_of_programming_tests
        test_main.cpp
        chapter1_tests.cpp
)

target_link_libraries(
        elements_of_programming_tests
        elements_of_programming_lib
        gtest_main
        gmock_main
)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void run_test(const char *test_str, const char *trim_set, const char *expected_result) {
    char *result = ft_strtrim(test_str, trim_set);
    int passed = (result && expected_result && strcmp(result, expected_result) == 0)
                 || (!result && !expected_result);

    printf("Input: \"%s\"\n", test_str);
    printf("Trim set: \"%s\"\n", trim_set);
    printf("Expected: \"%s\"\n", expected_result);
    printf("Got     : \"%s\"\n", result ? result : "NULL");

    if (passed)
        printf("\033[0;32m[PASS]\033[0m\n\n");
    else
        printf("\033[0;31m[FAIL]\033[0m\n\n");

    free(result);
}

int main(void) {
    // Test cases
    run_test("   Hello World   ", " ", "Hello World");
    run_test("xxx42xxx", "x", "42");
    run_test("no-trim-needed", "xyz", "no-trim-needed");
    run_test("////trim////", "/", "trim");
    run_test("   ", " ", "");
    run_test("", " ", "");
    run_test("test", "", "test");
    run_test("++--data--++", "+-", "data");

    return 0;
}
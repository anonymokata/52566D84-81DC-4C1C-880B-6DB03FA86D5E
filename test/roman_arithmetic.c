/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "test/roman_arithmetic.ts" instead.
 */

#include <check.h>

#line 1 "test/roman_arithmetic.ts"
#include <stdio.h>
#include "../src/roman_arithmetic.h"

START_TEST(add_one_to_one_to_get_two)
{
#line 5
        ck_assert_str_eq(addRoman("I", "I"), "II");

}
END_TEST

START_TEST(add_multiple_single_NUMERALS_to_get_a_subtractive)
{
#line 8
        ck_assert_str_eq(addRoman("II", "II"), "IV");

}
END_TEST

START_TEST(add_multiple_large_NUMERALS_less_than_max)
{
#line 11
        ck_assert_str_eq(addRoman("CXXIV", "MIX"), "MCXXXIII");

}
END_TEST

START_TEST(sum_above_max_returns_empty_string)
{
#line 14
        ck_assert_str_eq(addRoman("MMM", "MMM"), "ERROR");

}
END_TEST

START_TEST(one_invalid_numeral_addition_results_in_error)
{
#line 17
        ck_assert_str_eq(subtractRoman("I", "PROBLEM"), INVALID_ARABIC_CODE);

}
END_TEST

START_TEST(invalid_NUMERALS_addition_results_in_error)
{
#line 20
        ck_assert_str_eq(subtractRoman("IAM", "PROBLEM"), INVALID_ARABIC_CODE);

}
END_TEST

START_TEST(subtract_one_from_two)
{
#line 23
        ck_assert_str_eq(subtractRoman("II", "I"), "I");

}
END_TEST

START_TEST(subtract_subtractive_from_its_base)
{
#line 26
        ck_assert_str_eq(subtractRoman("V", "IV"), "I");

}
END_TEST

START_TEST(subtract_subtractive_from_larger_number)
{
#line 29
        ck_assert_str_eq(subtractRoman("X", "IV"), "VI");

}
END_TEST

START_TEST(smaller_minuend_results_in_error)
{
#line 32
        ck_assert_str_eq(subtractRoman("I", "II"), INVALID_ARABIC_CODE);

}
END_TEST

START_TEST(one_invalid_numeral_subtraction_results_in_error)
{
#line 35
        ck_assert_str_eq(subtractRoman("I", "PROBLEM"), INVALID_ARABIC_CODE);

}
END_TEST

START_TEST(invalid_NUMERALS_subtraction_results_in_error)
{
#line 38
        ck_assert_str_eq(subtractRoman("IAM", "PROBLEM"), INVALID_ARABIC_CODE);
}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, add_one_to_one_to_get_two);
    tcase_add_test(tc1_1, add_multiple_single_NUMERALS_to_get_a_subtractive);
    tcase_add_test(tc1_1, add_multiple_large_NUMERALS_less_than_max);
    tcase_add_test(tc1_1, sum_above_max_returns_empty_string);
    tcase_add_test(tc1_1, one_invalid_numeral_addition_results_in_error);
    tcase_add_test(tc1_1, invalid_NUMERALS_addition_results_in_error);
    tcase_add_test(tc1_1, subtract_one_from_two);
    tcase_add_test(tc1_1, subtract_subtractive_from_its_base);
    tcase_add_test(tc1_1, subtract_subtractive_from_larger_number);
    tcase_add_test(tc1_1, smaller_minuend_results_in_error);
    tcase_add_test(tc1_1, one_invalid_numeral_subtraction_results_in_error);
    tcase_add_test(tc1_1, invalid_NUMERALS_subtraction_results_in_error);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}

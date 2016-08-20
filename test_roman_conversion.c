/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "test_roman_conversion.ts" instead.
 */

#include <check.h>

#line 1 "test_roman_conversion.ts"
#include <stdio.h>
#include "roman.h"

START_TEST(converting_negative_number_results_in_error)
{
#line 5
        ck_assert_str_eq(toRoman(-1), INVALID_ARABIC_CODE);

}
END_TEST

START_TEST(converts_zero_to_empty_string)
{
#line 8
        ck_assert_str_eq(toRoman(0), INVALID_ARABIC_CODE);

}
END_TEST

START_TEST(converts_one_to_I)
{
#line 11
        ck_assert_str_eq(toRoman(1), "I");

}
END_TEST

START_TEST(converts_string_of_NUMERALS_to_arabic)
{
#line 14
        ck_assert_str_eq(toRoman(3), "III");

}
END_TEST

START_TEST(converts_multiple_digit_NUMERALS_to_arabic)
{
#line 17
        ck_assert_str_eq(toRoman(4), "IV");

}
END_TEST

START_TEST(converts_five_to_V)
{
#line 20
        ck_assert_str_eq(toRoman(5), "V");

}
END_TEST

START_TEST(converts_forty_four_to_XCIV)
{
#line 23
        ck_assert_str_eq(toRoman(44), "XLIV");

}
END_TEST

START_TEST(converts_empty_to_error)
{
#line 26
        ck_assert_int_eq(toArabic(""), 0);

}
END_TEST

START_TEST(converts_I_to_one)
{
#line 29
        ck_assert_int_eq(toArabic("I"), 1);

}
END_TEST

START_TEST(converts_two_of_same_numeral_in_a_row)
{
#line 32
        ck_assert_int_eq(toArabic("II"), 2);

}
END_TEST

START_TEST(converts_subtractive_of_non_repeating)
{
#line 35
        ck_assert_int_eq(toArabic("IV"), 4);

}
END_TEST

START_TEST(converts_non_repeating)
{
#line 38
        ck_assert_int_eq(toArabic("V"), 5);

}
END_TEST

START_TEST(converts_single_term_roman_to_arabic)
{
#line 41
        ck_assert_int_eq(toArabic("C"), 100);

}
END_TEST

START_TEST(converts_two_digit_single_term_roman_to_arabic)
{
#line 44
        ck_assert_int_eq(toArabic("IX"), 9);

}
END_TEST

START_TEST(converts_multiple_two_digit_terms_roman_to_arabic)
{
#line 47
        ck_assert_int_eq(toArabic("XXIX"), 29);

}
END_TEST

START_TEST(does_not_convert_invalid_numeral)
{
#line 50
        ck_assert_int_eq(toArabic("XXIXX"), INVALID_ROMAN_CODE);

}
END_TEST

START_TEST(does_not_convert_more_than_three_repeating_to_numeral)
{
#line 53
        ck_assert_int_eq(toArabic("IIII"), INVALID_ROMAN_CODE);

}
END_TEST

START_TEST(does_not_convert_sequence_of_non_repeating_NUMERALS)
{
#line 56
        ck_assert_int_eq(toArabic("VV"), INVALID_ROMAN_CODE);

}
END_TEST

START_TEST(does_not_convert_sequence_of_non_repeating_NUMERALS_subtractive)
{
#line 59
        ck_assert_int_eq(toArabic("IVIV"), INVALID_ROMAN_CODE);

}
END_TEST

START_TEST(does_not_convert_sequence_of_a_NON_REPEATING_numeral_and_its_subtractive)
{
#line 62
        ck_assert_int_eq(toArabic("VIV"), INVALID_ROMAN_CODE);
}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, converting_negative_number_results_in_error);
    tcase_add_test(tc1_1, converts_zero_to_empty_string);
    tcase_add_test(tc1_1, converts_one_to_I);
    tcase_add_test(tc1_1, converts_string_of_NUMERALS_to_arabic);
    tcase_add_test(tc1_1, converts_multiple_digit_NUMERALS_to_arabic);
    tcase_add_test(tc1_1, converts_five_to_V);
    tcase_add_test(tc1_1, converts_forty_four_to_XCIV);
    tcase_add_test(tc1_1, converts_empty_to_error);
    tcase_add_test(tc1_1, converts_I_to_one);
    tcase_add_test(tc1_1, converts_two_of_same_numeral_in_a_row);
    tcase_add_test(tc1_1, converts_subtractive_of_non_repeating);
    tcase_add_test(tc1_1, converts_non_repeating);
    tcase_add_test(tc1_1, converts_single_term_roman_to_arabic);
    tcase_add_test(tc1_1, converts_two_digit_single_term_roman_to_arabic);
    tcase_add_test(tc1_1, converts_multiple_two_digit_terms_roman_to_arabic);
    tcase_add_test(tc1_1, does_not_convert_invalid_numeral);
    tcase_add_test(tc1_1, does_not_convert_more_than_three_repeating_to_numeral);
    tcase_add_test(tc1_1, does_not_convert_sequence_of_non_repeating_NUMERALS);
    tcase_add_test(tc1_1, does_not_convert_sequence_of_non_repeating_NUMERALS_subtractive);
    tcase_add_test(tc1_1, does_not_convert_sequence_of_a_NON_REPEATING_numeral_and_its_subtractive);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}

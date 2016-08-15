/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "test_roman.ts" instead.
 */

#include <check.h>

#line 1 "test_roman.ts"
#include <stdio.h>
#include "libroman.h"

START_TEST(converts_one_to_I)
{
#line 5
        ck_assert_str_eq("I", rom_ToRoman(1));
}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, converts_one_to_I);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}

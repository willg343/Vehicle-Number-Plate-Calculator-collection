/*
  The sample test suite was developed by the following CodeWars user: www.codewars.com/users/donaldsebleung
*/


#include <cgreen/cgreen.h>

void find_the_number_plate(int id, char *number_plate);

Describe(FindTheNumberPlate);
BeforeEach(FindTheNumberPlate) {}
AfterEach(FindTheNumberPlate) {}

Ensure(FindTheNumberPlate, should_work_for_fixed_tests) {
  char number_plate[8];
  find_the_number_plate(0, number_plate);
  assert_that(number_plate, is_equal_to_string("aaa001"));
  find_the_number_plate(21, number_plate);
  assert_that(number_plate, is_equal_to_string("aaa022"));
  find_the_number_plate(169, number_plate);
  assert_that(number_plate, is_equal_to_string("aaa170"));
  find_the_number_plate(998, number_plate);
  assert_that(number_plate, is_equal_to_string("aaa999"));
  find_the_number_plate(999, number_plate);
  assert_that(number_plate, is_equal_to_string("baa001"));
  find_the_number_plate(1997, number_plate);
  assert_that(number_plate, is_equal_to_string("baa999"));
  find_the_number_plate(1998, number_plate);
  assert_that(number_plate, is_equal_to_string("caa001"));
  find_the_number_plate(24975, number_plate);
  assert_that(number_plate, is_equal_to_string("zaa001"));
  find_the_number_plate(25973, number_plate);
  assert_that(number_plate, is_equal_to_string("zaa999"));
  find_the_number_plate(25974, number_plate);
  assert_that(number_plate, is_equal_to_string("aba001"));
  find_the_number_plate(43056, number_plate);
  assert_that(number_plate, is_equal_to_string("rba100"));
  find_the_number_plate(10598400, number_plate);
  assert_that(number_plate, is_equal_to_string("bsp010"));
  find_the_number_plate(17558423, number_plate);
  assert_that(number_plate, is_equal_to_string("zzz999"));
}

TestSuite *solution_tests() {
  TestSuite *suite = create_test_suite();
  add_test_with_context(suite, FindTheNumberPlate, should_work_for_fixed_tests);
  return suite;
}

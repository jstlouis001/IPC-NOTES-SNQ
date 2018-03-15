#include <stdio.h>
#include "tools.h"

int main(void) {
  int ival;
  double dval;
  printf("IPC144 ms1 in lab test\n");
  printf("Starting tester!\n");
  pause();
  printf("Testing yes(), Enter the followig:\n");
  printf("abc<ENTER>\ny<ENTER>\n");
  if (yes()) {
    printf("Passed!\n");
  }
  else {
    printf("Failed\n");
  }
  printf("Enter: Y<ENTER>\n");
  if (yes()) {
    printf("Passed!\n");
  }
  else {
    printf("Failed\n");
  }
  printf("Enter: n<ENTER>\n");
  if (!yes()) {
    printf("Passed!\n");
  }
  else {
    printf("Failed\n");
  }
  printf("Enter: N<ENTER>\n");
  if (!yes()) {
    printf("Passed!\n");
  }
  else {
    printf("Failed\n");
  }
  printf("Testing scanInt(), Enter the following:\n");
  printf("abc<ENTER>\n");
  printf("1abc<ENTER>\n");
  printf("1<ENTER>\n\n");
  scanInt(&ival);
  printf("Entered value is: %d\n\n", ival);
  printf("The output should be exactly as follows:\n\n");
  printf("abc\n");
  printf("Invalid integer try again: 1abc\n");
  printf("Invalid integer try again: 1\n");
  printf("Entered value is : 1\n\n");
  printf("End scanInt() test\n\n");
  printf("Tesing getint(), Enter the following:\n"
    "a<ENTER>\n"
    "1<ENTER>\n"
    "3<ENTER>\n"
    "2<ENTER>\n\n");
  ival = getInt(2, 2, "> ", "Bad 2");
  printf("Entered value is: %d\n\n", ival);
  printf("The output should be exactly as follows:\n\n");
  printf("> a\n"
    "Invalid integer try again: 1\n"
    "Bad 2 (2 <= value <= 2) : 3\n"
    "Bad 2 (2 <= value <= 2) : 2\n"
    "Entered value is : 2\n\n");
  printf("End getInt() test\n\n");

  printf("Testing scanDouble(), Enter the following:\n");
  printf("abc<ENTER>\n");
  printf("1abc<ENTER>\n");
  printf("1<ENTER>\n\n");
  scanDouble(&dval);
  printf("Entered value is: %.1lf\n\n", dval);
  printf("The output should be exactly as follows:\n\n");
  printf("abc\n");
  printf("Invalid number try again: 1abc\n");
  printf("Invalid number try again: 1\n");
  printf("Entered value is : 1.0\n\n");
  printf("End scanDouble() test\n\n");
  printf("Tesing getDouble(), Enter the following:\n"
    "a<ENTER>\n"
    "1<ENTER>\n"
    "6<ENTER>\n"
    "4<ENTER>\n\n");
  dval = getDouble(3.0, 5, "> ", "Bad 4", 1);
  printf("Entered value is: %.1lf\n\n", dval);
  printf("The output should be exactly as follows:\n\n");
  printf("> a\n"
    "Invalid number try again: 1\n"
    "Bad 4 (3.0 <= value <= 5.0) : 6\n"
    "Bad 4 (3.0 <= value <= 3.0) : 4\n"
    "Entered value is : 4.0\n\n");
  printf("End getDouble() test\n\n");
  printf("End IPC144 ms1 in lab test\n");
  return 0;
}
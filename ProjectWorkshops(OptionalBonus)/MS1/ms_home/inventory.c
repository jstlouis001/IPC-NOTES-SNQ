#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "item.h"
#include "menu.h"

#define MAX_ITEM_NUMBER 500

int main(void) {
  struct Item inv[MAX_ITEM_NUMBER];
  int noOfItems = 0;
  printf("Seneca IPC Inventory System\n\n");
  selectAction(inv, &noOfItems);
  printf("Goodbye!\n");
  return 0;
}


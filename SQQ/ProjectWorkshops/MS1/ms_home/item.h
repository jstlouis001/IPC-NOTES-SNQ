#ifndef _SICT_ITEM_H  // forces the complier to compile this
#define _SICT_ITEM_H  // header file only once.


struct Item {
  double price;
  int sku;
  int quantity;
  int minQuantity;
  int shelfNumber;
  char name[31];
  char taxed;  // 'y' or 'n'
};



#endif
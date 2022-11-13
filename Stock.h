#include "Item.h"

#include <iostream>
#include <vector>

class Stock {
private:
  std::vector<Item> onHands;

public:
  Stock();
  void addItem(std::string, int);
  Item getItemAt(int);
  std::vector<Item> getInventory();
};
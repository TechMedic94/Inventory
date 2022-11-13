#include "Stock.h"

Stock::Stock() {}

void Stock::addItem(std::string name, int qty) {
  Item item;
  item.setItemName(name);
  item.setQTY(qty);
  onHands.push_back(item);
}

std::vector<Item> Stock::getInventory() { return onHands; }
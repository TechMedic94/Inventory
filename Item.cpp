#include "Item.h"

Item::Item() {
  itemName = "Unknown";
  itemInfo = "No information on item";
  QTY = 0;
}

Item::Item(std::string name, int qty) {
  itemName = name;
  QTY = qty;
}

void Item::setQTY(int qty) { QTY = qty; }
void Item::adjQTY(int qty) { QTY += qty; }
int Item::getQTY() { return QTY; }

void Item::setItemName(std::string name) { itemName = name; }
std::string Item::getItemName() { return itemName; }

void Item::setItemInfo(std::string info) { itemInfo = info; }
std::string Item::getItemInfo() { return itemInfo; }
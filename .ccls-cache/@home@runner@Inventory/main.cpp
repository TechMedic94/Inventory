#include <iostream>
#include <vector>

class Item;

class Item {
private:
  int QTY = 0;
  std::string itemName = "";
  std::string itemInfo = "";

public:
  Item();
  void setQTY(int);
  void adjQTY(int);
  int getQTY();

  void setItemName();
  void getItemName();

  void setItemInfo();
  void getItemInfo();
};

Item::Item() {}

void Item::setQTY(int qty) { QTY = qty; }

int main() { std::cout << "[TechMedics Inventory System]\n\n"; }
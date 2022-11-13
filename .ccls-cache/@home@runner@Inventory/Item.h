#include <iostream>

class Item {
private:
  int QTY = 0;
  std::string itemName = "";
  std::string itemInfo = "";

public:
  Item();
  Item(std::string, int);
  void setQTY(int);
  void adjQTY(int);
  int getQTY();

  void setItemName(std::string);
  std::string getItemName();

  void setItemInfo(std::string);
  std::string getItemInfo();
};
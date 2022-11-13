#include "Border.h"
#include "FileManager.h"
#include "Stock.h"

int main() {
  std::string test;
  Border b;
  std::cout << b.getBorderChar(1101) << std::endl;
  // FileManager fm;
  // fm.setFName("border");
  // fm.read();
  /*Stock stock;
  std::cout << "[TechMedics Inventory System]\n\n";
  stock.addItem("SpongeBob", 1);
  stock.addItem("Patrick", 1);
  stock.addItem("Sexy Print", 1);
  stock.addItem("Demon", 1);
  stock.addItem("Dice", 1);
  stock.addItem("Jack", 1);

  Item item;
  for (int i = 0; i < stock.getInventory().size(); i++) {
    item = stock.getInventory().at(i);
  }
*/
  return 0;
}
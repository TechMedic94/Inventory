#import <iostream>

class Border {
private:
  bool up, down, left, right;
  const std::string top_left = "╔";
  const std::string top_right = "╗";
  const std::string bottom_left = "╚";
  const std::string bottom_right = "╝";
  const std::string horizontal = "═";
  const std::string vertical = "║";
  const std::string intersect_middle = "╬";
  const std::string intersect_top = "╦";
  const std::string intersect_bottom = "╩";
  const std::string intersect_left = "╠";
  const std::string intersect_right = "╣";

public:
  Border();
  std::string getBorderChar(int);
};
#include "Border.h"

Border::Border() {
  up = false;
  down = false;
  left = false;
  right = false;
}

std::string Border::getBorderChar(int input) {
  std::string c;
  switch (input) {
  case 0000:
    c = " ";
    break;
  case 0101:
    c = top_left;
    break;
  case 0110:
    c = top_right;
    break;
  case 1001:
    c = bottom_left;
    break;
  case 1010:
    c = bottom_right;
    break;
  case 0011:
    c = horizontal;
    break;
  case 1100:
    c = vertical;
    break;
  case 1111:
    c = intersect_middle;
    break;
  case 0111:
    c = intersect_top;
    break;
  case 1011:
    c = intersect_bottom;
    break;
  case 1101:
    c = intersect_left;
    break;
  case 1110:
    c = intersect_right;
    break;
  }
  return c;
}
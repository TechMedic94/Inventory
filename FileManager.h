#include <fstream>
#include <iostream>

class FileManager {
private:
  std::string fName, fPath;

public:
  FileManager();
  void setFName(std::string);
  std::string getFName();
  void setFPath(std::string);
  std::string getFPath();

  void read();
  void write();
};
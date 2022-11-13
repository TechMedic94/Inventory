#include "FileManager.h"

FileManager::FileManager() {
  fName = "";
  fPath = "";
}

void FileManager::setFName(std::string newName) { fName = newName; }
std::string FileManager::getFName() { return fName; }

void FileManager::setFPath(std::string newPath) { fPath = newPath; }
std::string FileManager::getFPath() { return fPath; }

void FileManager::read() {
  std::ifstream f;
  f.open(fPath + fName);
  if (f.is_open()) {
    std::string fileContents;
    while (!f.eof()) {
      std::getline(f, fileContents);
      std::cout << fileContents << std::endl;
    }
    f.close();
  }
}

void FileManager::write() {}
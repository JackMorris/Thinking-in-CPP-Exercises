#ifndef TEXT0701_H
#define TEXT0701_H

#include <string>

class Text {
  std::string textContents;
public:
  Text();
  Text(std::string filepath);
  std::string contents();
};

#endif

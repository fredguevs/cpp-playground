#include <iostream>

class Top {
public:
  int f1() {
    return 1;
  }

  virtual int f2() {
    return 2;
  }

};

class Mid : public Top{
public:
  int f1() {
    return 3;
  }

  virtual int f2() {
    return 4;
  }
};

class Bot : public Mid {
public:
  int f1() {
    return 5;
  }

  virtual int f2() {
    return 6;
  }
};

int main() {
  Top top;
  Mid mid;
  Bot bot;

  Top *top_ptr = &bot;
  Mid *mid_ptr = &mid;

  std::cout << top.f1() << std::endl; // 1
  std::cout << mid.f1() << std::endl; // 3
  std::cout << bot.f1() << std::endl; // 5
  std::cout << top_ptr->f1() << std::endl; // 1
  std::cout << top_ptr->f2() << std::endl; // 6
  std::cout << mid_ptr->f2() << std::endl; // 4
  mid_ptr = &bot;
  std::cout << mid_ptr->f1() << std::endl; // 3
  std::cout << mid_ptr->f2() << std::endl; // 6

  return 0;
}
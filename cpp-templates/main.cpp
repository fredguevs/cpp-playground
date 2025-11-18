// parametric polymorphism
#include <iostream>

// class can be used instead of typename; two are equivalent
// in this context ^
template <typename t, std::size_t N>
class array;

int main() {
  std::array<int, 10> items;

  // dynamic typing
  using UnsortedIntSet = UnsortedSet<int>;
  typedef UnsortedSet<int> UnsortedIntSet;
  return 0
};
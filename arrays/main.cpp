#include <iostream>

using namespace std;

void printArray(int arr[], int size) {
  for (int i = 0; i < size; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

// increments each element in array by one
void incrementByOne(int arr[], int size) {
  for (int i = 0; i < size; ++i){
    ++arr[i];
    std::cout << arr[i] << std::endl;
  }
}

void pointerArithmetic() {
  int array[] = { 4, 3, 2, 1 };
  int *ptr1 = array; // pointer to the beginning of array
  int *ptr2 = &array[2]; // pointer to third element
  int *ptr3 = ptr1 + 2; // pointer to third element
  int *ptr4 = array + 2; // pointer to third element
  ++ptr1; // move pointer to second element
}

void traversalByPointer() {
  int const SIZE = 3; // constant to represent array size
  int array[SIZE] = {-1, 7, 3};
  int *end = array + SIZE; // pointer just past the end of arr
  for (int *ptr = array; ptr < end; ++ptr)
  {                       // walk pointer across arr
    cout << *ptr << endl; // dereference to obtain element
  }
}


int main() {
  int arr[5]; // 5 is a compile-time constant specifying the number of elements

  const int SIZE = 5;
  int arr2[SIZE]; // SIZE is a const variable, allowed in C++14

  // no explicit initialization, elements have indeterminate values
  int arr3[5] = {1, 2}; // remaining elements initialized to 0
  int arr4[5] = {}; // all elements initialized to 0
  
  int array[4] = {1, 2, 3, 4};
  // arrays decay into pointers
  cout << &array[0] << endl; // prints 0x1000 assuming the figure above
  cout << array << endl;     // prints 0x1000 assuming the figure above
  *array = -1;
  cout << array[0] << endl; // prints -1

  const double arr[4]; // "arr is an array of four constant doubles"

  return 0;
}
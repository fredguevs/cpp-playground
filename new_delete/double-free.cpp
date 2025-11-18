void func2()
{
  int x = 0;
  int *ptr1 = new int(1);
  int *ptr2 = new int(2);
  ptr2 = ptr1;

  delete ptr1;
  delete ptr2;
}
//Задание 5. Числа Фибоначчи
#include <iostream>
#include <string>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Russian");
      int a = 1, b = 1, q;
      for (int i = 0; i < 5; i++)
      {
         int temp = a;
         a = b + a;
         b = temp;
      }
      std::cout << a << "    " << b << "\n";
}
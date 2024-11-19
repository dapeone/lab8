#include <iostream>
#include <string>

using namespace std;

void programm1 (int n) {
  
  string rim[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
  int arab[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  string result;

  for (int i = 0; i < 13; ++i) {
    while (n >= arab[i]) {
      result += rim[i];
      n -= arab[i];
    }
  }
  cout << "Римское число: " << result << endl;
};

void programm2 (string N) {

  int total = 0;
  int prevValue = 0;

  for (char c : N) {
    int currentValue = 0;

    // Определяем значение текущего символа
    if (c == 'I') {
      currentValue = 1;
    }
    else if (c == 'V') {
      currentValue = 5;
    }
    else if (c == 'X') {
      currentValue = 10;
    } 
    else if (c == 'L') {
      currentValue = 50;
    }
    else if (c == 'C') {
      currentValue = 100;
    }
    else if (c == 'D') {
      currentValue = 500;
    }
    else if (c == 'M') {
      currentValue = 1000;
    }

    total += currentValue;

    // Если текущее значение больше предыдущего, вычитаем дважды предыдущее значение
    if (currentValue > prevValue) {
      total -= 2 * prevValue;
    }

    prevValue = currentValue;
  
  
  }
cout << total;
};

int main() {
    cout << "Выберите действие" << endl << "1 - перевести арабское число в римское" << endl << "2 - перевести римское число в арабское" << endl;
    int make;
    cin >> make;

    if (make==1) {
      int number;
      cout << "Введите арабское число   ";
      cin >> number;
      programm1(number);

      return 0;
    }
    else if (make == 2) {
      string Number;
      cout << "Введите римское число   ";
      cin >> Number;
      programm2 (Number);

      return 0;
    }
    else {
      cout << "Выбрано некорректное действие. Выберите 1 или 2";
    }
}
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");

    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int amt = 0;
    string text = " совпадающих!";

    cout << endl;
    cout << " Введите первое число: ";
    cin >> number1;
    cout << " Введите второе число: ";
    cin >> number2;
    cout << " Введите третье число: ";
    cin >> number3;

    if (number1 == number3 && number2 == number3) {
        amt = 3;
    }
    else {
        if (number1 == number3 || number2 == number3 || number1 == number2) {
            amt = 2;
        }
        else {
            amt = 0;
        }
    }
    cout << " " << amt << text << endl;
    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}
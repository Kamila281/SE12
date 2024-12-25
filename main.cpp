#include <iostream>
//Программа является учебной
// Автор: Булякова Камила
//Группа: КЭ-217
//Год:2024

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    int num1, num2;
    cout << "Введите первое целое число: ";
    cin >> num1;
    cout << "Введите второе целое число: ";
    cin >> num2;
    cout << "Вы ввели: " << num1 << " и " << num2 << endl;
    cout << "Сумма:" << (num1+num2) << endl;
    cout << "Разность:" << (num1-num2) << endl;
    cout << "Произведение:" << (num1*num2) << endl;
        return 0;
}

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> S; // Стек для зберігання рядків
    int count = 0; // Змінна для підрахунку символів

    // Додаємо рядки до стека
    S.push("BMW");
    S.push("Audi");
    S.push("Tesla");

    // Виведіть усі елементи стека та підрахуйте символи
    while (!S.empty()) {
        string str = S.top(); // Отримати верхній елемент
        count += str.length(); // Додати кількість символів
        cout << str << endl; // Вивести рядок
        S.pop(); // Видалити верхній елемент
    }

    cout << "Загальна кількість символів: " << count << endl;
    return 0;
}
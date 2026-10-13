#Практична робота №4:

**Тема: Реалізація стеку**

**Мета:** *ознайомитися з основами роботи зі стеком у C++ за допомогою
стандартного контейнерного std::stack, вивчити основні операції стека:
додавання, видалення, перегляд верхнього елемента, перевірка на порожність і
очищення стека.*

**Виконала:** студентка групи 4СОМ Серветнік Лілія (Варіант № 13)

##  Завдання.
<img width="627" height="120" alt="image" src="https://github.com/user-attachments/assets/f0c333bb-e62e-487d-bbdf-6dd2dc7e96de" />
<img width="816" height="77" alt="Знімок екрана 2026-10-13 114956" src="https://github.com/user-attachments/assets/0efa4ea2-443d-4118-af17-4afa90217553" />
<img width="940" height="520" alt="Знімок екрана 2026-10-13 114840" src="https://github.com/user-attachments/assets/37d416c7-3c39-455a-b4e3-328214bc191f" />

### 💻 Код програми:
<img width="1916" height="597" alt="image" src="https://github.com/user-attachments/assets/f9085bc1-5cb3-4e8d-8bde-7dd5728bbf4d" />

```cpp
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
```
### 💻 Результат програми:
```cpp
Tesla
Audi
BMW
Загальна кількість символів: 12
```
##  Завдання.
<img width="861" height="150" alt="image" src="https://github.com/user-attachments/assets/edad66e4-d611-4e9b-8d1b-b8b3b1c3ad32" />

### 💻 Код програми:
<img width="1910" height="671" alt="image" src="https://github.com/user-attachments/assets/8b6a0598-dce9-4ba0-a09e-0f4363b2ea1f" />

```cpp
#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> S; // Стек для зберігання цілих чисел
    int sum = 0; // Змінна для підрахунку суми
    int n; // Змінна для розміру стека
    // Запитати у користувача розмір стека
    cout << "Введіть розмір стека: ";
    cin >> n;
    // Додати елементи до стека
    cout << "Введіть " << n << " цілих чисел:" << endl;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num; // Ввести число
        S.push(num); // Додати число до стека5
    }
    // Витягніть всі числа з стека та обчисліть суму
    cout << "Елементи стека: ";
    while (!S.empty()) {
        int num = S.top(); // Отримати верхній елемент
        cout << num << " "; // Вивести число
        sum += num; // Додати до суми
        S.pop(); // Видалити верхній елемент
    }
    
    cout << "\nСума чисел: " << sum << endl;
    
    return 0;
}
```
### 💻 Результат програми:
```cpp
Введіть розмір стека: 5
Введіть 5 цілих чисел:
30 40 50 60 70
Елементи стека: 70 60 50 40 30 
Сума чисел: 250
```
##  Завдання.
<img width="1096" height="285" alt="image" src="https://github.com/user-attachments/assets/b6eeaac8-caeb-4249-9f81-68c2946e2fb9" />
### 💻 Код програми:
<img width="1337" height="670" alt="image" src="https://github.com/user-attachments/assets/ac4d58a0-651b-44a0-a78e-ca754946dcf8" />

```cpp
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
```
### 💻 Результат програми:
```cpp
Tesla
Audi
BMW
Загальна кількість символів: 12
```
##  Завдання.
<img width="1096" height="285" alt="image" src="https://github.com/user-attachments/assets/b6eeaac8-caeb-4249-9f81-68c2946e2fb9" />
### 💻 Код програми:
<img width="1337" height="670" alt="image" src="https://github.com/user-attachments/assets/ac4d58a0-651b-44a0-a78e-ca754946dcf8" />

```cpp
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
```
### 💻 Результат програми:
```cpp
Tesla
Audi
BMW
Загальна кількість символів: 12
```##  Завдання.
<img width="535" height="102" alt="Знімок екрана 2026-10-13 121804" src="https://github.com/user-attachments/assets/14f83dd3-498e-4ba9-9b93-4c4f8f05cc53" />
<img width="777" height="70" alt="Знімок екрана 2026-10-13 121616" src="https://github.com/user-attachments/assets/f15a6eff-24eb-4dbd-a533-a0473ccfe14e" />
<img width="840" height="217" alt="image" src="https://github.com/user-attachments/assets/40b0508d-2935-4317-9852-a5ca84d09a63" />
### 💻 Код програми:
<img width="1401" height="726" alt="image" src="https://github.com/user-attachments/assets/0a4b7c0b-9b87-43bc-be39-437d4777dcbd" />

```cpp
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
```
### 💻 Результат програми:
```cpp
Tesla
Audi
BMW
Загальна кількість символів: 12
```
```##  Завдання.
<img width="776" height="97" alt="Знімок екрана 2026-10-13 122423" src="https://github.com/user-attachments/assets/1074b007-4bd6-4eee-bb8e-90eeb6b10a50" />
### 💻 Код програми:
<img width="1585" height="637" alt="image" src="https://github.com/user-attachments/assets/c2a5aa15-d0bd-4e15-a197-cb4908cdabcd" />

```cpp
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
```
### 💻 Результат програми:
```cpp
Tesla
Audi
BMW
Загальна кількість символів: 12
```









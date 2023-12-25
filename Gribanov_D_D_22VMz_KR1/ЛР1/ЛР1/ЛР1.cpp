#include <iostream>
#include <unordered_set>
#include <string>

int main() {
    setlocale(LC_ALL, "RU");
    std::string input;

    // Ввод строки от пользователя
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);

    // Используем unordered_set для отслеживания уникальных символов
    std::unordered_set<char> uniqueChars;

    // Новая строка без повторений
    std::string result;

    // Обходим каждый символ в исходной строке
    for (char ch : input) {
        // Если символ еще не встречался, добавляем его в результат и в уникальный набор
        if (uniqueChars.insert(ch).second) {
            result += ch;
        }
    }

    // Вывод результата
    std::cout << "Строка без повторений: " << result << std::endl;

    return 0;
}
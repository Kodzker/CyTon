#include <iostream>
#include "fantasy.h"
//using namespace std;
//using namespace fantasy;
//using namespace python;

#include "variables.h"

variables vars;


// на самом деле аргументы исполнитель принимать будет, но пока что они не нужны
int main() {
    std::string tmp = ".", text = ".";
    while (true) {
        text = ".";
        std::cin >> text;

        if ("exit" == text) {
            break;
        }

        if ("=" == text) {
            variable var(tmp, tmp);
            vars.push(var);
            python::print(vars);
            std::cout << "signal" << std::endl;
            // сказать что следующие слово сохранить в объект
        }

        if ("=" == tmp) {
            // добавить в последний text
            python::print(vars.get());
            vars.get().set_var(text);
            python::print(vars.get());

            // tmp = ";"; // я скажу что это присвоение и если этот символ был предыдущим а следующий предыдущий то значит
            // значение часть это переменной.

            //если следующие слово, то-есть сейчас текущие, я вытаскиваю последний
            // элемент и вбиваю его в ресурсы а после возвращаю обратно в вектор.
            // Сказать что ничего не говорил.
        }

        // если предыдущий ; а текущий , то следующий тоже относится к переменной иначе сказать что переменна закрыта

        tmp = text;
    }
    for (int i = 0; i < python::len(vars); i++) {
        python::print(vars.get_variables()[i]);
    }
    python::print(vars);
}

/**
 *язык принимает пока что команды:
 * name = 1 // присвоение текста
 * exit
 * */

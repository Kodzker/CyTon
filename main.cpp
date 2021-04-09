#include <iostream>
#include "fantasy.h"
//using namespace std;
//using namespace fantasy;

#include "variables.h"

#include "VAR_LIST.h"
#include "py_cpp.h"

using namespace py_cpp;
VAR_LIST vars;


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
            VAR var(tmp, tmp);
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
            //если следующие слово, то-есть сейчас текущие, я вытаскиваю последний
            // элемент и вбиваю его в ресурсы а после возвращаю обратно в вектор.
            // Сказать что ничего не говорил.
        }

        tmp = text;
    }
    python::print(vars);
}

/**
 *язык принимает пока что команды:
 * name = 1 // присвоение текста
 * exit
 * */

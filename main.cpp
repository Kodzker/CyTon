#include <iostream>
#include <vector>
#include <string>


using namespace std;

#include "VAR_LIST.h"
#include "py_cpp.h"

using namespace py_cpp;
VAR_LIST vars;


// на самом деле аргументы исполнитель принимать будет, но пока что они не нужны
int main() {
    string tmp = ".", text = ".";
    while (true) {
        text = ".";
        cin >> text;

        if ("exit" == text) {
            break;
        }

        if ("=" == text) {
            VAR var(tmp, tmp);
            vars.push(var);
            print(vars);
            cout << "signal" << endl;
            // сказать что следующие слово сохранить в объект
        }

        if ("=" == tmp) {
            // добавить в последний text
            print(vars.get());
            vars.get().set_var(text);
            print(vars.get());
            //если следующие слово, то-есть сейчас текущие, я вытаскиваю последний
            // элемент и вбиваю его в ресурсы а после возвращаю обратно в вектор.
            // Сказать что ничего не говорил.
        }

        tmp = text;
    }
    print(vars);
}

/**
 *язык принимает пока что команды:
 * name = 1 // присвоение текста
 * exit
 * */

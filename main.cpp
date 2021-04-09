#include <iostream>
#include <vector>
#include <string>


using namespace std;
#include "VAR_LIST.h"

vector<VAR> vars;

void echo_vector(vector<VAR> &list_var, const string &sep = " ",
                 const string &end_line = "\n") {
    for (auto i: list_var)
        cout << i.get_name() << "," << sep << i.get_var() << sep;
    cout << end_line;
}

// на самом деле аргументы исполнитель принимать будет, но пока что они не нужны
int main() {
    string tmp, text;
    while (true) {
        text.clear();
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

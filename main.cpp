#include "syntax.h"
#include <iostream>
#include <vector>
#include <string>
#include <list>


#include "VAR.h"

using namespace std;
vector<VAR> vars;

void echo_vector(vector<VAR> &list_var, const string &sep = " ",
                 const string &end_line = "\n") {
    for (auto i: list_var)
        cout << i.get_name() << "," << sep << i.get_var() << sep;
    cout << end_line;
}

int main() {//(int args_length, char *args_array[]) {
    BEGIN;
    string tmp, text;
    while (true) {
        text.clear();
        cin >> text;

        if ("exit" == text) {
            break;
        }

        if ("=" == text) {
            VAR var(tmp, tmp);
            vars.push_back(var);

            echo_vector(vars, " ", "\n");
            cout << "signal" << endl;
            // сказать что следующие слово сохранить в объект
        }

        if ("=" == tmp) {
            vars[vars.size() - 1].echo();
            vars[vars.size() - 1].set_var(text);
            vars[vars.size() - 1].echo();
            //если следующие слово, то-есть сейчас текущие, я вытаскиваю последний
            // элемент и вбиваю его в ресурсы а после возвращаю обратно в вектор.
            // Сказать что ничего не говорил.
        }

        tmp = text;
    }
    END;
}

/**
 *язык принимает пока что команды:
 * name = 1 // присвоение текста
 * exit
 * */

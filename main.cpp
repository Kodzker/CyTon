#include "syntax.h"

class VAR {
    string name;
    string var;
public:
    VAR(string &name, string &var) {
        this->name = name;
        this->var = var;
    }
};

vector<VAR> vars;

start {
    begin;
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
            // сказать что следующие слово сохранить в объект
        }
//если следующие слово, то-есть сейчас текущие, я вытаскиваю последний элемент
// и вбиваю его в ресурсы а после возвращаю обратно в вектор.
//сказать что ничего не говорил
        tmp = text;
    }
    end;
}

/**
 *язык принимает пока что команды:
 * name = 1 // присвоение текста
 * exit
 * */

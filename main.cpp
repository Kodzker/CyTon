#include "syntax.h"

class VAR {
    string name;
    string var;
public:
    VAR() {
        this->~VAR();
    }

    VAR(string &name, string &var) {
        set_name(name);
        set_var(var);
    }

    ~VAR() {
        this->name.clear();
        this->var.clear();
    }

    string get_name() {
        return this->name;
    }

    string get_var() {
        return this->var;
    }

    void set_name(string &text) {
        this->name = text;
    }

    void set_var(string &text) {
        this->var = text;
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

//vars[1];

            for (auto i: vars) {
                cout << i.get_name() << ",  " << i.get_var() << endl;
            }

            cout << "signal" << endl;
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

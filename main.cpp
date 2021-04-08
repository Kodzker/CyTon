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

    void echo() {
        cout << this->get_name() << " " << this->get_var() << endl;
    }
};

vector<VAR> vars;

void echo_vector(vector<VAR> &list_var, const string &sep = " ",
                 const string &end_line = "\n") {
    for (auto i: list_var)
        cout << i.get_name() << "," << sep << i.get_var() << sep;
    cout << end_line;
}


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
    end;
}

/**
 *язык принимает пока что команды:
 * name = 1 // присвоение текста
 * exit
 * */

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
    // bool math = true;
    string tmp, text;
    while (true) {
        // if(math) math =false;
        text.clear();
        cin >> text;
        if ("exit" == text) {
            break;
        }
        if ("=" == text) {
            VAR var(tmp, tmp);
            vars.push_back(var);
            // сказать что следующие слово сохранить в обьект
        }
//если слудующие слово,тоесть сейчас теекущие, я вытаскиваю последний елемент
// и вбиваю его в ресурсы а после возвращаю обратно в веткор.
        tmp = text;
    }
    end;
}

/**
 *язык принимает пока что команды:
 * name = 1 // присвоение текста или числа,

 *  чтобы явно указать текста нужно задать настройку - но это позже
 *
 *
 * math {}
 * exit
 * */

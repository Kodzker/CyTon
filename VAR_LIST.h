//
// Created by cyton_code on 09.04.2021.
//

#ifndef CYTON_VAR_LIST_H
#define CYTON_VAR_LIST_H

#include "VAR.h"

class VAR_LIST {
    vector<VAR> vars;

    void _clear() {
        this->vars.clear();
    }

public:
    VAR_LIST() { // конструктор
        this->_clear();
        cout << "[start list]" << endl;
    }

    VAR_LIST(vector<VAR> &array) { // копирование
        this->~VAR_LIST();
        for (const auto &i: array) {
            this->vars.push_back(i);
        }
    }

    ~VAR_LIST() { // деструктор
        this->_clear();
        cout << "[exit list]" << endl;
    }

    vector<VAR> GET_VAR_LIST() { // вставка
        return this->vars;
    }

    bool is_name_in(string &text) { // поиск имени в массиве
        for (auto var: this->vars)
            if (text == var.get_name())
                return true;
        return false;
    }
    void echo(){
        // вывод массива не екран.
    }
/**
 * +я массив переменных.
 * +я могу вернуть массив, иметь копирование массива.
 * +я могу вернуть есть ли в моем массиве такое имя
 * я могу по сортировать массив местами - просто воспользуюсь swap содержимым или сразу объектами.
 * _я могу добавить элемент-переменную в массив
 * я могу добавить элемент-переменную в массив если ее нет
 * _я могу удалить элемент-переменную в массиве если она есть
 * я удалю переменную
 *
 * */
};


#endif //CYTON_VAR_LIST_H

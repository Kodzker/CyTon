//
// Created by cyton_code on 09.04.2021.
//

#ifndef CYTON_VARIABLES_H
#define CYTON_VARIABLES_H

#include "variable.h"
#include <vector>

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

    VAR_LIST(const vector<VAR> &array) { // копирование
        this->~VAR_LIST();
        for (const auto &i: array) {
            this->vars.push_back(i);
        }
    }

    ~VAR_LIST() { // деструктор
        this->_clear();
        cout << "[exit list]" << endl;
    }

    vector<VAR> get_VAR_LIST() { // вставка
        return this->vars;
    }

    bool search_name(const string &text) { // поиск имени в массиве
        for (auto var: this->vars)
            if (text == var.get_name())
                return true; // оно есть
        return false; // его нет
    }

    // вывод массива не экран.
    void _echo_() {
        for (auto var: this->vars)
            var._echo_();
    }

    void push(VAR &tmp) {
        if (!this->search_name(tmp.get_name()) && tmp.get_name() != ".")
            //if (ее нет в именах) и оно не пустое:
            this->vars.push_back(tmp);
        else {
            cout << "not name!" << endl;
        }
        // иначе удалить и візвать єту функцию рекурсивно.
    }

    auto pop() {
        if (!this->vars.empty())
            return this->vars.pop_back();
    }

    int _len_() {
        return this->vars.size();
    }

    VAR &get() {
        return this->vars[this->vars.size() - 1];
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


#endif //CYTON_VARIABLES_H

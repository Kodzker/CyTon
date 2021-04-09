//
// Created by cyton_code on 09.04.2021.
//

#ifndef CYTON_VARIABLES_H
#define CYTON_VARIABLES_H

#include "variable.h"
#include <vector>

class variables {
    std::vector<variable> vars;

    void _clear() {
        this->vars.clear();
    }

public:
    variables() { // конструктор
        this->_clear();
        std::cout << "[start list]" << std::endl;
    }

    variables(const std::vector<variable> &array) { // копирование
        this->~variables();
        for (const auto &i: array) {
            this->vars.push_back(i);
        }
    }

    ~variables() { // деструктор
        this->_clear();
        std::cout << "[exit list]" << std::endl;
    }

    std::vector<variable> get_VAR_LIST() { // вставка
        return this->vars;
    }

    bool _search_(const std::string &text) { // поиск имени в массиве
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

    // TODO ЭТА ФУНКЦИЯ НА РАБОТАЕТ ТАК КАК НАДО. НЕДОРАБОТАНА
    void push(variable &tmp) {
        if (!this->_search_(tmp.get_name()) && tmp.get_name() != ".")
            //if (ее нет в именах) и оно не пустое:
            this->vars.push_back(tmp);
        else {
            std::cout << "not name!" << std::endl;
        }
        // иначе удалить и візвать єту функцию рекурсивно.
    }

    auto pop() {
        if (!this->vars.empty())
            return this->vars.pop_back();
    }

    unsigned int _len_() {
        return this->vars.size();
    }

    variable &get() {
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

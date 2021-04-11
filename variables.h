//
// Created by cyton_code on 09.04.2021.
//

#ifndef CYTON_VARIABLES_H
#define CYTON_VARIABLES_H

#include "variable.h"

class variables {
    std::vector<variable> vars;
public:
    variables() { // конструктор
        this->_clear_();
        std::cout << "[start list]" << std::endl;
    }

    variables(const std::vector<variable> &array) { // копирование
        this->~variables();
        for (const auto &i: array) {
            this->vars.push_back(i);
        }
    }

    ~variables() { // деструктор
        this->_clear_();
        std::cout << "[exit list]" << std::endl;
    }

    std::vector<variable> get_variables() { // вставка
        return this->vars;
    }

    bool _search_(const std::string &name) { // поиск имени в массиве
        for (auto var: this->vars)
            if (name == var.get_name())
                return true; // оно есть
        return false; // его нет
    }

    int _get_id_(const std::string &name) {
        for (int i = 0; i < this->vars.size(); i++)
            if (name == this->vars[i].get_name())
                return i;
        throw NameItsNotDefined();
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
        // иначе удалить и вызвать єту функцию рекурсивно.
    }

    auto pop() {
        if (!this->vars.empty())
            return this->vars.pop_back();
    }

    unsigned int _len_() {
        return this->vars.size();
    }

    // почистить массив.
    void _clear_() {
        this->vars.clear();
    }

    // удалить меня.
    void _del_() {
        this->~variables();
        delete this;
    }

    // дать получить доступ изменять последнего.
    variable &get() {
        return this->vars[this->vars.size() - 1];
    }

    void add(std::string &name) {
        if (this->_search_(name))
            throw NameItsNotDefined(); // это  имя уже есть!
        std::vector<std::string> var;
        variable tmp(name, var);
        this->push(tmp);
    }

    void upd(std::string &name, std::string &var) {
        if (!this->_search_(name))
            throw NameItsNotDefined(); // этого  имени нет!
        // это имя есть:
        this->_get_id_(name);

    }
//    variables *_swap_() {
//        return this;
//    }

//    template<typename typ>
    void swap(variables &obj1, variables &obj2) {
        variables tmp1, tmp2;

        tmp1 = obj1;
        tmp2 = obj2;

        obj1 = tmp2;
        obj2 = tmp1;
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

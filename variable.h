//
// Created by cyton_code on 09.04.2021.
//

#ifndef CYTON_VARIABLE_H
#define CYTON_VARIABLE_H

#include <string>

class variable : protected container {
private:
    std::string name; // идентификатор переменной или массива.
    std::vector<std::string> var; // var - 1 элемент, array - больше элементов указателей на имена var.
//    std::string id; // походу раньше я добавлю type
    std::string type; // array - (var указывает на имя), var (var просто переменная)

    void _set_name(std::string &text) {
        this->name = text;
    }

public:
    variable() {
        this->variable::~variable();
    }

    variable(std::string &name, std::vector<std::string> &var) {
        _set_name(name);
        set_var(var);
    }

    ~variable() {
        this->name.clear();
        this->var.clear();
    }

    std::string &get_name() override {
        return this->name;
    }

    std::vector<std::string> &get_var() {
        return this->var;
    }


    void set_var(std::vector<std::string> &text) {
        this->var = text;
    }

    void _echo_() {
        std::cout << this->get_name() << ": " << this->get_var()[0] << std::endl;
    }

    bool _equally_(variable &obj) {
        if (obj.get_name() == this->get_name() && obj.get_var() == this->get_var())
            return true;
        return false;
    }

    // удалить меня.
    void _del_() override {
        this->variable::~variable();
        delete this;
    }
    void _add_(std::string &_name, std::string &_type = (std::string &) "void") override {
        //, std::vector<std::string> &var) {
        this->name = _name;
        this->type = _type;
    } // объявление переменной, всегда вызывается даже неявно.
};


#endif //CYTON_VARIABLE_H
